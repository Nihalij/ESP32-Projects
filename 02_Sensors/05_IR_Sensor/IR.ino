#define IR_PIN 27
#define LED_PIN 5

void setup() {
  Serial.begin(115200);

  pinMode(IR_PIN, INPUT);
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  int irValue = digitalRead(IR_PIN);

  if (irValue == LOW) {
    Serial.println("Object detected!");
    digitalWrite(LED_PIN, HIGH);
  }
  else {
    Serial.println("No object");
    digitalWrite(LED_PIN, LOW);
  }

  delay(500);
}
