const int potPin = 34;
const int ledPin = 18;

void setup() {
  pinMode(potPin, INPUT);
  pinMode(ledPin, OUTPUT);

  Serial.begin(115200);
}

void loop() {
  int value = analogRead(potPin);

  Serial.println(value);

  int pwm = map(value, 0, 4095, 0, 255);

  analogWrite(ledPin, pwm);

  delay(500);
}
