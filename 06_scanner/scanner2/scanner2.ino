/*
  Leçon 6 - Neopixels

  Exercice Libre 1 : Scanner Arc en ciel
*/

#include <Adafruit_NeoPixel.h>
int BROCHE_LEDS = 3;
int NOMBRE_LEDS = 6;
int LUMINOSITE = 30;

long couleur = 0;

Adafruit_NeoPixel leds(NOMBRE_LEDS, BROCHE_LEDS, NEO_GRBW + NEO_KHZ800);

void setup() {
  Serial.begin(9600);
  leds.setBrightness(LUMINOSITE);
  leds.begin();
}

void loop() {
  couleur = couleur + 512;
  Serial.println(couleur);

  for (int i = 0; i < NOMBRE_LEDS; i++) {

    if (i != 0) {
      leds.setPixelColor(i - 1, 0, 0, 0, 0);
    }
    leds.setPixelColor(i, leds.ColorHSV(couleur));
    leds.show();
    delay(30);
  }

  for (int i = NOMBRE_LEDS; i > 0; i--) {

    if (i != NOMBRE_LEDS) {
      leds.setPixelColor(i + 1, 0, 0, 0, 0);
    }
    leds.setPixelColor(i, leds.ColorHSV(couleur));
    leds.show();
    delay(30);
  }

  if(couleur == 65536){
    couleur = 0;
  }
}
