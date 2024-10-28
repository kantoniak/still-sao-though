#include <Arduino.h>

constexpr uint8_t PIN_LED_1 = 1;
constexpr uint8_t PIN_LED_2 = 4;

void setup() {
  // Init and turn off LEDs
  pinMode(PIN_LED_1, OUTPUT);
  pinMode(PIN_LED_2, OUTPUT);
  digitalWrite(PIN_LED_1, LOW);
  digitalWrite(PIN_LED_2, LOW);
}

void loop() {
  digitalWrite(PIN_LED_1, HIGH);
  digitalWrite(PIN_LED_2, HIGH);
  delay(500);
  digitalWrite(PIN_LED_1, LOW);
  digitalWrite(PIN_LED_2, LOW);
  delay(500);
}
