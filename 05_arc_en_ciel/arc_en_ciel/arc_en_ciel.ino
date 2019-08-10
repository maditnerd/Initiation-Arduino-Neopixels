/*
  Leçon 5 - Neopixels

  Faire un arc en ciel (1 leds) - BUG!
  Choisir la couleur ici : https://www.colorspire.com/rgb-color-wheel/
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
  /* Il y a plusieurs façons de représenter les couleurs.
    RGB (Rouge Vert Bleu)
    HSV (Teinte Saturation Valeur)

    L'avantage du HSV, est que l'on peut changer les couleurs avec une seul valeur (teinte)
    la valeur TEINTE : Change la couleur (0 à 65536)
    La valeur SATURATION : Change la saturation de la couleur (0 à 255)
    La valeur VALEUR (Luminosité) : Diminue ou augmente la Luminosité (0 à 255)
  */

  for (int i = 0; i < 65536; i = i+256) {
    Serial.println(i);
    leds.setPixelColor(0, leds.ColorHSV(i));
    leds.show();
  }
}
