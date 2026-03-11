// Motor 1
int enA = 5;
int in1 = 6;
int in2 = 7;

// Motor 2
int enB = 10;
int in3 = 8;
int in4 = 9;

void setup() {
  pinMode(enA, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);

  pinMode(enB, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
}

void motor1Forward() {
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  analogWrite(enA, 200);
}

void motor2Forward() {
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
  analogWrite(enB, 200);
}

void stopMotors() {
  analogWrite(enA, 0);
  analogWrite(enB, 0);
}

void loop() {

  motor1Forward();
  delay(2000);

  motor2Forward();
  delay(2000);

  motor1Forward();
  motor2Forward();
  delay(3000);

  stopMotors();
  delay(2000);
}