#include <ESP32Servo.h>

Servo myServo;

int potPin = 34;       // Potentiometer ADC pin
int servoPin = 18;     // Servo signal pin

void setup() {
  Serial.begin(115200);
  myServo.attach(servoPin);
}

void loop() {
  int adcValue = analogRead(potPin);   // Read ADC value (0–4095)

  int angle = map(adcValue, 0, 4095, 0, 180);  // Convert to angle

  myServo.write(angle);
  Serial.println(angle);

  delay(20);
}
