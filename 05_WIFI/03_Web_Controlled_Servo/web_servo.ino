#include <WiFi.h>
#include <WebServer.h>
#include <ESP32Servo.h>

#define Servo_PIN 18

const char* ssid = "Wokwi-GUEST";
const char* password = "";

WebServer server(80);
Servo myservo;

void setup() {

  // Start Serial Monitor
  Serial.begin(9600);

  // Attach servo to GPIO 18
  myservo.attach(Servo_PIN);

  // Set initial servo position
  myservo.write(0);

  // Connect to WiFi
  WiFi.begin(ssid, password);
  Serial.println("Connecting to WIFI!!");

  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  // Display connection details
  Serial.println();
  Serial.println("WIFI connected");
  Serial.print("IP Address: ");
  Serial.println(WiFi.localIP());

  // Main web page
  server.on("/", []() {
    server.send(200, "text/html",
      "<h1>ESP32 Servo Control</h1>"
      "<a href='/0'><button>Servo 0</button></a><br><br>"
      "<a href='/90'><button>Servo 90</button></a><br><br>"
      "<a href='/180'><button>Servo 180</button></a>"
    );
  });

  // Move servo to 0°
  server.on("/0", []() {
    myservo.write(0);

    server.send(200, "text/html",
      "<h1>Servo = 0°</h1>"
      "<a href='/'><button>Back</button></a>"
    );
  });

  // Move servo to 90°
  server.on("/90", []() {
    myservo.write(90);

    server.send(200, "text/html",
      "<h1>Servo = 90°</h1>"
      "<a href='/'><button>Back</button></a>"
    );
  });

  // Move servo to 180°
  server.on("/180", []() {
    myservo.write(180);

    server.send(200, "text/html",
      "<h1>Servo = 180°</h1>"
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
