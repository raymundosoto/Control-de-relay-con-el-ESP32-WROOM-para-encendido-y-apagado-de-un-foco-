/*
 * Codigo para controlar un relay con el ESP32 WROOM
 *
 * This ESP32 code is released in the public domain
 *
 * 
 */

#define RELAY_PIN 33 // ESP32 pin GIOP33 conectado al pin IN del relay

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin as an output.
  pinMode(RELAY_PIN, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(RELAY_PIN, HIGH);  // Dura encendido 3 segundos
  delay(3000);
  digitalWrite(RELAY_PIN, LOW); // Se apaga cada 3 segundos
  delay(3000);
}
