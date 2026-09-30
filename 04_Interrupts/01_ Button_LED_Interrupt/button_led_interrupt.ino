#define BUTTON_PIN 4
#define LED_PIN 2

volatile bool buttonPressed = false;

void IRAM_ATTR buttonISR() {
  buttonPressed = true;
}

void setup() {
  pinMode(BUTTON_PIN, INPUT_PULLUP);
  pinMode(LED_PIN, OUTPUT);

  attachInterrupt(
    digitalPinToInterrupt(BUTTON_PIN),
    buttonISR,
    FALLING
  );
}

void loop() {
  if (buttonPressed) {
    digitalWrite(LED_PIN, !digitalRead(LED_PIN));
    buttonPressed = false;
  }
}
