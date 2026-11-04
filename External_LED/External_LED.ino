#define LED_PIN 2  // D2 pin

void setup() {
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_PIN, HIGH); // LED ON
  delay(1000);                 // Wait 1 second

  digitalWrite(LED_PIN, LOW);  // LED OFF
  delay(1000);                 // Wait 1 second
}