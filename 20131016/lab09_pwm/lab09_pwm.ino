int led = 11;                  // promemoria: dov'è il LED? Attenzione: deve essere su un pin PWM
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
  int valore = analogRead(trimmer); // val assume un valore tra 0 e 10237
  int intensita = map(valore, 0, 1023, 0, 254);  // trasforma la lettura in un intervallo valido per il PWM
  Serial.print(valore);           // scrive il valore letto
  Serial.print(" - ");            // scrive un separatore
  Serial.println(intensita);      // scrive l'intensità con cui accendere il LED
  analogWrite(led, intensita);    // apri l'acqua
  delay(500);                     // un attimo di pausa!
}

