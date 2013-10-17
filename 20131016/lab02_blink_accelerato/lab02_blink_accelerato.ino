void setup() {
  pinMode(13, OUTPUT);  // il pin 13 è un rubinetto
}

void loop() {
  digitalWrite(13, HIGH);  // apri l'acqua
  delay(500);             // aspetta mezzo secondo
  digitalWrite(13, LOW);   // chiudi l'acqua
  delay(500);             // aspetta mezzo secondo
}

