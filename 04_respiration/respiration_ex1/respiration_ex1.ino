/*
  Leçon 4 - Initiation Neopixels

  Exercice 1 : Faire "respirer des" leds (complet)
*/

#include <Adafruit_NeoPixel.h>
int BROCHE_LEDS = 3;
int NOMBRE_LEDS = 6;
int LUMINOSITE = 30;

Adafruit_NeoPixel leds(NOMBRE_LEDS, BROCHE_LEDS, NEO_GRBW + NEO_KHZ800);

void setup() {
  Serial.begin(115200);
  leds.setBrightness(LUMINOSITE);
  leds.begin();
}

void loop() {
  for (int j = 0; j < 255; j++) {
    for (int i = 0; i < NOMBRE_LEDS; i++) {
      leds.setPixelColor(i, j, 0, 0, 0);
    }
    delay(10);
    leds.show();
  }

  for (int j = 255; j > 0; j--) {
    for (int i = 0; i < NOMBRE_LEDS; i++) {
      leds.setPixelColor(i, j, 0, 0, 0);
    }
    delay(10);
    leds.show();
  }
}
