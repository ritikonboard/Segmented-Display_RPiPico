void setup(){
  pinMode (12, OUTPUT);
  pinMode (13, OUTPUT);
  pinMode (14, OUTPUT);
  pinMode (15, OUTPUT);
  pinMode (16, OUTPUT);
  pinMode (17, OUTPUT);
  pinMode (18, OUTPUT);
  pinMode (19, OUTPUT);
}


void loop(){
  digitalWrite(12, HIGH);
  digitalWrite(13, HIGH);
  digitalWrite(14, HIGH);
  digitalWrite(15, HIGH);
  digitalWrite(16, HIGH);
  digitalWrite(17, HIGH);
  digitalWrite(18, LOW);
  digitalWrite(19, HIGH);
  delay(800);

  digitalWrite(12, HIGH);
  digitalWrite(13, HIGH);
  digitalWrite(14, HIGH);
  digitalWrite(15, HIGH);
  digitalWrite(16, HIGH);
  digitalWrite(17, LOW);
  digitalWrite(18, LOW);
  digitalWrite(19, HIGH);
  delay(800);

  digitalWrite(12, HIGH);
  digitalWrite(13, HIGH);
  digitalWrite(14, HIGH);
  digitalWrite(15, HIGH);
  digitalWrite(16, HIGH);
  digitalWrite(17, LOW);
  digitalWrite(18, LOW);
  digitalWrite(19, HIGH);
  delay(800);

  digitalWrite(12, HIGH);
  digitalWrite(13, HIGH);
  digitalWrite(14, LOW);
  digitalWrite(15, LOW);
  digitalWrite(16, LOW);
  digitalWrite(17, LOW);
  digitalWrite(18, HIGH);
  digitalWrite(19, HIGH);
  delay(800);
  digitalWrite(12, HIGH);
  digitalWrite(13, HIGH);
  digitalWrite(14, HIGH);
  digitalWrite(15, LOW);
  digitalWrite(16, HIGH);
  digitalWrite(17, LOW);
  digitalWrite(18, HIGH);
  digitalWrite(19, HIGH);
  delay(800);
}
