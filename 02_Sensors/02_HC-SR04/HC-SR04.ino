
#define trig_pin 19
#define echo_pin 35
#define led_pin 18
#define buzzer_pin 14

void setup() {
  Serial.begin(115200);

  pinMode(led_pin, OUTPUT);
  pinMode(buzzer_pin, OUTPUT);
  pinMode(trig_pin, OUTPUT);
  pinMode(echo_pin, INPUT);
}

void loop() {
  digitalWrite(trig_pin, LOW);
  delayMicroseconds(2);

  digitalWrite(trig_pin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig_pin, LOW);

  long duration = pulseIn(echo_pin, HIGH, 30000);
  float distance = duration * 0.0343 / 2;

  if (duration > 0 && distance < 10) {
    digitalWrite(led_pin, HIGH);

    digitalWrite(buzzer_pin, HIGH);
    delay(200);
    digitalWrite(buzzer_pin, LOW);
    delay(200);

    Serial.println("Alert!!");
  } else {
    digitalWrite(led_pin, LOW);
    digitalWrite(buzzer_pin, LOW);
    Serial.println("Safe");
    delay(100);
  }
}
