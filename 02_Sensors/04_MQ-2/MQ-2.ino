#define MQ_PIN 35
#define LED_PIN 5
#define BUZZER_PIN 21
void setup() {
  Serial.begin(115200);
  pinMode(LED_PIN, OUTPUT);
  pinMode(BUZZER_PIN, OUTPUT);
}

void loop() {
  int gasvalue = analogRead(MQ_PIN);

  Serial.print("Gas value: ");
  Serial.println(gasvalue);

  if( gasvalue > 2000) {
    Serial.println("WARNING! Gas level high!");
    digitalWrite(BUZZER_PIN,HIGH);
    digitalWrite(LED_PIN,HIGH);
   

  } else {
    Serial.println("Gas level normal");
    digitalWrite(BUZZER_PIN,LOW);
    digitalWrite(LED_PIN,LOW);
    
  }
  delay(2000);
}
