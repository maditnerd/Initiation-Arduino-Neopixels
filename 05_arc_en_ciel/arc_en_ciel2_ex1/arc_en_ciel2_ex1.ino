/*
  Leçon 5 - Neopixels

  Exercice 1 : Faire un arc en ciel (6 leds)
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
  for (long i = 0; i < 65536; i = i+256) {
    Serial.println(i);
    for (int j = 0; j < NOMBRE_LEDS; j++) {
      leds.setPixelColor(j, leds.ColorHSV(i));
    }
    leds.show();
  }
}
