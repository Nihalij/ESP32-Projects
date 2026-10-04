#include <WiFi.h>
#include <WebServer.h>

const char* ssid = "Wokwi-GUEST";
const char* password = "";

#define LED_PIN 2

WebServer server(80);

void setup() {

  // Set LED as output
  pinMode(LED_PIN, OUTPUT);
  digitalWrite(LED_PIN, LOW);

  Serial.begin(115200);

  // Connect to WiFi
  WiFi.begin(ssid, password);
  Serial.println("Connecting to WiFi...");

  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  // Show IP address
  Serial.println();
  Serial.println("Connected!");
  Serial.print("IP Address: ");
  Serial.println(WiFi.localIP());

  // Main web page
  server.on("/", []() {
    server.send(200, "text/html",
      "<h1>ESP32 LED Control</h1>"
      "<a href='/on'><button>LED ON</button></a>"
      "<a href='/off'><button>LED OFF</button></a>"
    );
  });

  // Turn LED ON
  server.on("/on", []() {
    digitalWrite(LED_PIN, HIGH);
    server.send(200, "text/html",
      "<h1>LED IS ON</h1>"
      "<a href='/'><button>Back</button></a>"
    );
  });

  // Turn LED OFF
  server.on("/off", []() {
    digitalWrite(LED_PIN, LOW);
    server.send(200, "text/html",
      "<h1>LED IS OFF</h1>"
      "<a href='/'><button>Back</button></a>"
    );
  });

  // Start web server
  server.begin();
  Serial.println("Web server started");
}

void loop() {

  // Handle browser requests
  server.handleClient();
}
