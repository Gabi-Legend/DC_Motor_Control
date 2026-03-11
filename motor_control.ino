// Motor 1
int enA = 5;
int in1 = 6;
int in2 = 7;
// Motor2
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

  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  digitalWrite(enA, HIGH);

  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
  digitalWrite(enB, HIGH);
}

void loop() {

}