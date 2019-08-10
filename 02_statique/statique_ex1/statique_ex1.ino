/*
  Leçon 2 - Neopixels

  Exercice 1 : Faire le drapeau français (3 leds)
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
  leds.setPixelColor(0, 0, 0, 255, 0);
  leds.setPixelColor(1, 0, 0, 0, 255);
  leds.setPixelColor(2, 255, 0, 0, 0);
  leds.show();
}

void loop() {
}
