int led = 13;                  // promemoria: dov'è il LED?
int pulsante = 7;              // promemoria: dov'è il pulsante?
int numRip = 10                // numero di ripetizioni per il lampeggio
/* Attenzione: potrei mettere la variabile numRip nel loop,
perché nel setup non mi serve; di solito però i parametri 
di configurazione per convenzione e comodità
si tengono in alto */

void setup() {
  pinMode(led, OUTPUT);        // il pin 13 è un rubinetto
  pinMode(pulsante, INPUT);    // il pin 7 è un pozzetto
  digitalWrite(led, LOW);      // chiudi l'acqua
}

void loop() {
  // metto nella variabile val quello che arriva nel pozzetto
  // se il pulsante è premuto passa corrente e val vale HIGH
  // altrimenti vale LOW
  int premuto = digitalRead(pulsante);

  if (premuto == HIGH) {         // se il pulsante è premuto
    for (int i = 0; i < numRip; i++) {
      digitalWrite(13, HIGH);    // apri l'acqua
      delay(1000);               // aspetta un secondo
      digitalWrite(13, LOW);     // chiudi l'acqua      
      delay(1000);               // aspetta un secondo
    }
  } else {                       // altrimenti
     digitalWrite(13, LOW);      // chiudi l'acqua      
  }
}

