int led = 13;                  // promemoria: dov'è il LED?
int trimmer = A0;              // promemoria: dov'è il trimmer?

void setup() {
  pinMode(led, OUTPUT);        // il pin 13 è un rubinetto
  // pinMode(trimmer, INPUT); non serve perché i pin analogici sono solo ingressi
  digitalWrite(led, LOW);      // chiudi l'acqua
  Serial.begin(9600);          // apro la porta seriale
  Serial.println("Hello, world!");  // scrivo un messaggio di prova
}

void loop() {
  // metto nella variabile val quello che arriva nel pozzetto analogico
  int val = analogRead(trimmer); // val assume un valore tra 0 e 1023
  Serial.println(val);
  digitalWrite(13, HIGH);    // apri l'acqua
  delay(val);                // aspetta quanto dice il trimmer
  digitalWrite(13, LOW);     // chiudi l'acqua      
  delay(val);                // aspetta quanto dice il trimmer
}

