int enA = 5;
int in1 = 6;
int in2 = 7;

void setup() {
  pinMode(enA, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);

  digitalWrite(in1, HIGH); 
  digitalWrite(in2, LOW);
  digitalWrite(enA, HIGH); 
}

void loop() {
}