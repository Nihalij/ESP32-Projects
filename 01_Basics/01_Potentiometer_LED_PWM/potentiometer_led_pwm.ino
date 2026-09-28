void setup() {
    pinMode(34, INPUT);
    pinMode(18, OUTPUT);

    Serial.begin(115200);
}

void loop() {

    int value = analogRead(34);

    Serial.println(value);

    int pwm = map(value, 0, 4095, 0, 255);

    analogWrite(18, pwm);

    delay(500);
}
