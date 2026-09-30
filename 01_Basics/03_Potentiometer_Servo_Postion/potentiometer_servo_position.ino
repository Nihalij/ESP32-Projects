#include <ESP32Servo.h>

Servo myServo;

int potPin = 34;
int servoPin = 18;

void setup() {
  Serial.begin(115200);

  myServo.attach(servoPin);
}

void loop() {

  int adcValue = analogRead(potPin);

  int angle = map(adcValue, 0, 4095, 0, 180);

  myServo.write(angle);

  Serial.println(angle);

  delay(20);
}
