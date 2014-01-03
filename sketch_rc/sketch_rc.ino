#include "RCSwitch.h"

RCSwitch mySwitch = RCSwitch();
int led = 13;

void setup() {
  Serial.begin(9600);
  pinMode(led, OUTPUT);
}

void loop() {
  // On
  mySwitch.switchOn("11011", "10000");
  digitalWrite(led, HIGH);
  delay(10000);
  digitalWrite(led, LOW);

  // Off
  mySwitch.switchOff("11011", "10000");
  digitalWrite(led, HIGH);
  delay(10000);
  digitalWrite(led, LOW);
}
