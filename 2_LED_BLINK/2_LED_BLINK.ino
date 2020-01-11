#define LED1 12
#define LED2 10
void setup() {
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
}
void loop() {
  
  delay(50);                
  digitalWrite(LED1, LOW);    
  delay(50);  
  digitalWrite(LED1, HIGH); 
  delay(50);                
  digitalWrite(LED2, LOW);    
  delay(50);  
  digitalWrite(LED2, HIGH);  
          
}
