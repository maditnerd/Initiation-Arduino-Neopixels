/*
  Leçon 3 - Neopixels

  Exercice 1 : Faire clignoter chaque moitié des leds
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
    for (int i = 0; i < 3; i++) {
      leds.setPixelColor(i, 0, 0, 0, 255);
    }
    leds.show();

    delay(1000);

    for (int i = 0; i < 3; i++) {
      leds.setPixelColor(i, 0, 0, 0, 0);
    }
    leds.show();

    delay(1000);

    for (int i = 3; i < NOMBRE_LEDS; i++) {
      leds.setPixelColor(i, 255, 0, 0, 0);
    }
    leds.show();

    delay(1000);

    for (int i = 3; i < NOMBRE_LEDS; i++) {
      leds.setPixelColor(i, 0, 0, 0, 0);
    }
    leds.show();

    delay(1000);
}
