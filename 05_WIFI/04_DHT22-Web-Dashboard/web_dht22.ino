#include <WiFi.h>
#include <WebServer.h>
#include "DHT.h"

const char* ssid = "Wokwi-GUEST";
const char* password = "";

WebServer server(80);

#define DHT_PIN 4
#define DHTTYPE DHT22

DHT dht(DHT_PIN, DHTTYPE);

void setup() {

  // Start DHT sensor
  dht.begin();

  // Start Serial Monitor
  Serial.begin(9600);

  // Connect to WiFi
  WiFi.begin(ssid, password);
  Serial.print("Connecting to WIFI");

  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  // Display WiFi details
  Serial.println();
  Serial.println("WIFI connected");
  Serial.print("IP Address: ");
  Serial.println(WiFi.localIP());

  // Web page
  server.on("/", []() {

    // Read temperature and humidity
    float temperature = dht.readTemperature();
    float humidity = dht.readHumidity();

    // Create webpage
    String webpage =
      "<html>"
      "<head>"
      "<meta http-equiv='refresh' content='2'>"
      "<title>ESP32 Dashboard</title>"
      "</head>"
      "<body>"
      "<h1>ESP32 Sensor Dashboard</h1>"
      "<h2>Temperature: "
      + String(temperature) +
      " °C</h2>"
      "<h2>Humidity: "
      + String(humidity) +
      " %</h2>"
      "</body>"
      "</html>";

    // Send webpage to browser
    server.send(200, "text/html", webpage);
  });

  // Start web server
  server.begin();
  Serial.println("Web Server Started");
}

void loop() {

  // Handle browser requests
  server.handleClient();
}
