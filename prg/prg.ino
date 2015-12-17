// program to test open loop step response
void setup() {
  Serial.begin(9600);
  pinMode(13, OUTPUT);
  pinMode(9, OUTPUT);
  
}

void loop() {
  int in = analogRead(1);
  analogWrite(9, 0);
  Serial.println(in);
}


