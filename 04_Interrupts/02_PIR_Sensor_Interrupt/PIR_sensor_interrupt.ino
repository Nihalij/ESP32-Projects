#define PIR_PIN 4

volatile int motioncount = 0;

void IRAM_ATTR motionIRS() {
    motioncount++;
}

void setup() {
  Serial.begin(115200);
  pinMode(PIR_PIN, INPUT);
  attachInterrupt(digitalPinToInterrupt(PIR_PIN),motionIRS,RISING);
}

void loop() {
     Serial.print("Motion count: ");
     Serial.println(motioncount);

    delay(1000);


}
