int photocellPin = 0;
int photocellReading;

void setup(void) {
  Serial.begin(9600);
}

void loop(void) {
  photocellReading = analogRead(photocellPin);

  Serial.println(photocellReading);

  delay(100);
}
