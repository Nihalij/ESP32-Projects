#include "DHT.h"

#define DHTPIN 4
#define DHTTYPE DHT22
#define LED_PIN 25

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);

  dht.begin();
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  float temperature = dht.readTemperature();
  float humidity = dht.readHumidity();

  if (isnan(temperature) || isnan(humidity)) {
    Serial.println("Failed to read from DHT22!");
    delay(2000);
    return;
  }

  Serial.print("Temperature : ");
  Serial.print(temperature);
  Serial.print(" °C | ");

  Serial.print("Humidity : ");
  Serial.print(humidity);
  Serial.println(" %");

  if (temperature > 30) {
    digitalWrite(LED_PIN, HIGH);
  } else {
    digitalWrite(LED_PIN, LOW);
  }

  delay(2000);
}
