/*
  Leçon 3 - Neopixels

  Faire clignoter les leds
  Choisir la couleur ici : https://www.colorspire.com/rgb-color-wheel/
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

    /* for (initialisation; condition; incrémentation)
    initialisation : création de la variable
    Ex:int i = 0;

    Condition : Tant que la variable est inférieur/supérieur à x, rester dans la boucle
    Ex: i < 6

    Incrémentation : A chaque boucle, augmenter la variable
    Ex: i++ ou i = i + 1
    */

    //Allumer toutes les leds
    for (int i = 0; i < NOMBRE_LEDS; i++) {
      leds.setPixelColor(i, 255, 100, 0, 0); // ROUGE: 255 VERT:100 BLEU: 0, BLANC: 0
    }
    leds.show();

    delay(1000);

    //Eteindre les leds
    for (int i = 0; i < NOMBRE_LEDS; i++) {
      leds.setPixelColor(i, 0, 0, 0, 0);
    }
    leds.show();
    delay(1000);
}
