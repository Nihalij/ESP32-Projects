#define BUTTON_PIN 4
#define LED_PIN 2

volatile bool buttonPressed = false;

void IRAM_ATTR buttonISR() {
  buttonPressed = true;
}

void setup() {
  Serial.begin(115200);

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

    Serial.println("Button Pressed!");
    Serial.println("Interrupt detected");

    buttonPressed = false;
  }
}
