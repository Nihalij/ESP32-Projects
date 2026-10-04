# define PIR_PIN 34
# define LED_PIN 17

void setup() {
  Serial.begin(115200);
  pinMode(PIR_PIN, INPUT);
  pinMode(LED_PIN, OUTPUT);

}

void loop() {
  int motion = digitalRead(PIR_PIN);

  if(motion == HIGH) {
    digitalWrite(LED_PIN , HIGH);
    Serial.println("Motion Detected!!");
  } else {
    digitalWrite(LED_PIN , LOW);
    Serial.println("NO Motion!!");
  }

  delay(2000);
}
