#define D1 3
#define D2 4
#define D3 5
#define D4 6
#define EN1 9
#define EN2 10

void setup() {
  pinMode(D1,OUTPUT);
  pinMode(D2,OUTPUT);
  pinMode(D3,OUTPUT);
  pinMode(D4,OUTPUT);
  pinMode(EN1,OUTPUT);
  pinMode(EN2,OUTPUT);
 
  Serial.begin(9600);
 
  
  // put your setup code here, to run once:

}

void loop() {
  char read=Serial.read();
  if(read=='1'){
     Serial.println("FORWARD");
    analogWrite(EN1,100);
    analogWrite(EN2,100);
    digitalWrite(D1,LOW);
    digitalWrite(D2,HIGH);
    digitalWrite(D3,LOW);
    digitalWrite(D4,HIGH);
  }
  else if(read=='2'){
    Serial.println("BACKWARD");
     analogWrite(EN1,100);
    analogWrite(EN2,100);
    digitalWrite(D1,LOW);
    digitalWrite(D2,HIGH);
    digitalWrite(D3,LOW);
    digitalWrite(D4,HIGH);
  }
  else if(read=='3'){
     analogWrite(EN1,100);
    analogWrite(EN2,50);
    digitalWrite(D1,HIGH);
    digitalWrite(D2,LOW);
    digitalWrite(D3,LOW);
    digitalWrite(D4,HIGH);
  }
  else if(read=='4'){
     analogWrite(EN1,50);
    analogWrite(EN2,100);
    digitalWrite(D1,LOW);
    digitalWrite(D2,HIGH);
    digitalWrite(D3,HIGH);
    digitalWrite(D4,LOW);
  }
  else
    Serial.println("INVALID");
    
  }
  
  
