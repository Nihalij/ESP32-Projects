#include <HardwareSerial.h>
#define LED_PIN 18

HardwareSerial mySerial(2);

void setup() {
  pinMode(LED_PIN, OUTPUT);
  Serial.begin(115200);
  mySerial.begin(115200,SERIAL_8N1,16,17);
}

void loop() {
      mySerial.println("ON");
         delay(2000);

      mySerial.println("OFF");
         delay(2000);


      if(mySerial.available()) {
        String command = mySerial.readStringUntil('\n');

        Serial.print("DATA RECEIVED: ");
        Serial.println(command);


        if(command == "ON") {
          digitalWrite(LED_PIN,HIGH);
          Serial.print("LED ON");
        } else if (command == "OFF") {
          digitalWrite(LED_PIN,LOW);
          Serial.print("LED OFF");
        }
      }

      delay(2000);
}
