void setup()
{
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
}

void loop()
{
  analogWrite(10, 100);
  digitalWrite(9, LOW);
  digitalWrite(8, HIGH);

  analogWrite(5, 100);
  digitalWrite(6, LOW);
  digitalWrite(7, HIGH);
  delay(10); // Delay a little bit to improve simulation performance
}