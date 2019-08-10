/*
  Leçon 6 - Neopixels

  Exercice Libre 1 : Scanner
*/

#include <Adafruit_NeoPixel.h>
int BROCHE_LEDS = 3;
int NOMBRE_LEDS = 6;
int LUMINOSITE = 30;

Adafruit_NeoPixel leds(NOMBRE_LEDS, BROCHE_LEDS, NEO_GRBW + NEO_KHZ800);

void setup() {
  Serial.begin(9600);
  leds.setBrightness(LUMINOSITE);
  leds.begin();
}

void loop() {
  for (int i = 0; i < 6; i++) {
    Serial.println(i);
    if (i != 0) {
      leds.setPixelColor(i - 1, 0, 0, 0, 0);
    }
    leds.setPixelColor(i, 255, 0, 0, 0);
    leds.show();
    delay(30);
  }

  for (int i = 6; i > 0; i--) {
    Serial.println(i);
    if (i != 6) {
      leds.setPixelColor(i + 1, 0, 0, 0, 0);
    }
    leds.setPixelColor(i, 255, 0, 0, 0);
    leds.show();
    delay(30);
  }
}
