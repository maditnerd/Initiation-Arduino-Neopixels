/*
  Leçon 1 - Neopixels

  Exercice 1 - Afficher le nombre de secondes écoulés
*/

int secondes = 0;

void setup() {
  Serial.begin(9600);
  Serial.println("Salut le monde !");
}

//Instructions dans la boucle
void loop() {
  secondes++; //Ajoute 1 à secondes;
  Serial.print(secondes); // Affiche la variable secondes (sans sauter de ligne)
  Serial.println(" secondes écoulés"); //Affiche le message secondes écoulés (en sautant une ligne)
  delay(1000); //Attends 1000ms (1 secondes)
}

//Cliquez sur la loupe en haut à droite pour voir le message
