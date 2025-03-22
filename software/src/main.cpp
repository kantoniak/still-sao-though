#include <Arduino.h>

constexpr uint8_t PIN_LED_1 = 1;
constexpr uint8_t PIN_LED_2 = 4;

bool pin_led_1_state = LOW;

void setup() {
  // Init and start LEDs
  pinMode(PIN_LED_1, OUTPUT);
  pinMode(PIN_LED_2, OUTPUT);
  digitalWrite(PIN_LED_1, pin_led_1_state);
  digitalWrite(PIN_LED_2, !pin_led_1_state);
}

void loop() {
  delay(750);
  pin_led_1_state = !pin_led_1_state;
  digitalWrite(PIN_LED_1, pin_led_1_state);
  digitalWrite(PIN_LED_2, !pin_led_1_state);
}
