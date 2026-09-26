const int ldrpin = 34;
const int ledpin = 22;

void setup() {
  pinMode(ldrpin, INPUT);

  Serial.begin(9600);

  // Configure ESP32 PWM
  ledcAttach(ledpin, 5000, 8);
}

void loop() {
  // Read LDR value (0–4095)
  int read = analogRead(ldrpin);

  // Convert ADC value to PWM value (0–255)
  int pwm = map(read, 0, 4095, 0, 255);

  Serial.println(pwm);

  // Control LED brightness
  ledcWrite(ledpin, pwm);
}
