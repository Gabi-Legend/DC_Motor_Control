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

void forward() {
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);

  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
}

void accelerate() {
  for (int v = 0; v <= 255; v += 5) {
    analogWrite(enA, v);
    analogWrite(enB, v);
    delay(40);
  }
}

void brake() {
  for (int v = 255; v >= 0; v -= 5) {
    analogWrite(enA, v);
    analogWrite(enB, v);
    delay(40);
  }
}

void loop() {

  forward();

  accelerate();   
  delay(2000);   

  brake();       
  delay(2000);
}