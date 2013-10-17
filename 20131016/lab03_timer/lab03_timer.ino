void setup() {
  pinMode(13, OUTPUT);     // il pin 13 è un rubinetto
  digitalWrite(13, HIGH);  // apri l'acqua
  delay(3000);             // aspetta tre secondi
  digitalWrite(13, LOW);   // chiudi l'acqua
}

void loop() {
  // non deve fare niente... quindi non fa niente :-)
}

