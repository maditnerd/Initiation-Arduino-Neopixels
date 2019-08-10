/*
  Leçon 1 - Neopixels

  Exercice 2 - Afficher le nombre de secondes écoulés (sans s pour 1 seconde)
*/

int secondes = 0;

void setup() {
  Serial.begin(9600);
  Serial.println("Salut le monde !");
}

void loop() {
  secondes++;
  Serial.print(secondes);

  if(secondes == 1){ // Si secondes == 1
    Serial.println(" seconde écoulé"); //Affiche le message seconde écoulé (en sautant une ligne)
  } else { // Sinon
    Serial.println(" secondes écoulés"); //Affiche le message secondes écoulés (en sautant une ligne)
  }

  delay(1000);
}

//Cliquez sur la loupe en haut à droite pour voir le message
