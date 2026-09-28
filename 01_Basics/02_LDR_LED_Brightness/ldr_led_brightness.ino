const int ldrpin = 34;
const int ledpin = 22;

void setup() {
  pinMode(ldrpin, INPUT);
  pinMode(ledpin, OUTPUT);
  Serial.begin(9600);
  ledcAttach(ledpin,5000,8);
}

void loop() {
  int read = analogRead(ldrpin);
  int pwm  = map(read,0,4095,0,255);

  Serial.println(pwm);
  ledcWrite(ledpin,pwm);

}
