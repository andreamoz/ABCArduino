int val = 0; 

void setup() {                
  pinMode(13, OUTPUT);  
  pinMode(7, INPUT);    
} 

void loop() { 
  val = digitalRead(7); 
  
  if (val == HIGH) { 
    digitalWrite(13, HIGH); 
    delay(5000);  
  } else { 
    digitalWrite(13, LOW); 
  }  
}
