int val = 0; 
int dur = 0; 

void setup() {                
  pinMode(13, OUTPUT);  
  pinMode(7, INPUT);  
} 

void loop() { 
  
  dur = analogRead(A0); 
  val = digitalRead(7); 
  
  if (val == HIGH) { 
    digitalWrite(13, HIGH); 
    dur = map(dur, 0, 1024, 1, 5000); 
    delay(dur);  
  } else { 
    digitalWrite(13, LOW); 
  }  
}
