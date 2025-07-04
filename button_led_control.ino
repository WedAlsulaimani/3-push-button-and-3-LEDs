
void setup()
{
  pinMode(2, INPUT);
  pinMode(13, OUTPUT);
  pinMode(3, INPUT);
  pinMode(12, OUTPUT);
  pinMode(4, INPUT);
  pinMode(11, OUTPUT);
  
  digitalWrite(13, LOW);
  digitalWrite(12, LOW);
  digitalWrite(11, LOW);
}

void loop()
{
  if (digitalRead(2) == 1) {
    digitalWrite(13, HIGH);
  } else {
    digitalWrite(13, LOW);
  }

  if (digitalRead(3) == 1) {
    digitalWrite(12, HIGH);
  } else {
    digitalWrite(12, LOW);
  }

  if (digitalRead(4) == 1) {
    digitalWrite(11, HIGH);
  } else {
    digitalWrite(11, LOW);
  }
  delay(10); // Delay a little bit to improve simulation performance
}
