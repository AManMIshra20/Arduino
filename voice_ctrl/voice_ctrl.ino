#include <SoftwareSerial.h>
#define D1 3
#define D2 4
#define D3 5
#define D4 6
#define EN1 9
#define EN2 10
String value;
int TX0=11;
int RX0=10;
SoftwareSerial bluetooth(TX0,RX0);


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
  Serial.println(value);
  if(bluetooth.available()){
    value=bluetooth.readString();
    if(value=="forward"){
      analogWrite(EN1,100);
    analogWrite(EN2,100);
    digitalWrite(D1,LOW);
    digitalWrite(D2,HIGH);
    digitalWrite(D3,LOW);
    digitalWrite(D4,HIGH);
    }
    if(value="backward"){
    analogWrite(EN1,100);
    analogWrite(EN2,100);
    digitalWrite(D1,LOW);
    digitalWrite(D2,HIGH);
    digitalWrite(D3,LOW);
    digitalWrite(D4,HIGH);
    }
    if(value="left"){
      analogWrite(EN1,100);
    analogWrite(EN2,0);
    digitalWrite(D1,HIGH);
    digitalWrite(D2,LOW);
    digitalWrite(D3,LOW);
    digitalWrite(D4,HIGH);
   }
   if(value="right"){
    analogWrite(EN1,0);
    analogWrite(EN2,100);
    digitalWrite(D1,LOW);
    digitalWrite(D2,HIGH);
    digitalWrite(D3,HIGH);
    digitalWrite(D4,LOW);
    
   }
  
    }








  
  // put your main code here, to run repeatedly:

}
