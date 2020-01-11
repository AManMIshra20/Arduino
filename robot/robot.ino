#define EN1 9
#define EN2 10
#define D1 1
#define D2 0
#define D3 2
#define D4 3
#define IR1 11
#define IR2 6
int SS1=0;
int SS2=0;

void setup() {
pinMode(EN1,OUTPUT);
pinMode(EN2,OUTPUT);
pinMode(D1,OUTPUT);
pinMode(D2,OUTPUT);
pinMode(D3,OUTPUT);
pinMode(D4,OUTPUT);
pinMode(IR1,OUTPUT);
pinMode(IR2,OUTPUT);  
}

void loop() {
  SS1=digitalRead(IR1); // left
  SS2=digitalRead(IR2); // right
  if((SS1==LOW) &&(SS2==LOW))   //FWD
  {
    analogWrite(EN1,50);
    analogWrite(EN2,80);
    digitalWrite(D1,HIGH);  //left
    digitalWrite(D2,LOW);   //left
    digitalWrite(D3,HIGH);  //right
    digitalWrite(D4,LOW);   //right
  }
  else if((SS1==HIGH) && (SS2==HIGH)) //BKWD
  {
    analogWrite(EN1,50);
    analogWrite(EN2,80);
    digitalWrite(D1,LOW);   //left
    digitalWrite(D2,HIGH);  //left
    digitalWrite(D3,LOW);   //right
    digitalWrite(D4,HIGH);  //right
    
  }
  else if((SS1==HIGH) && (SS2==LOW))  //RIGHT TURN
  {
    analogWrite(EN1,50);
    analogWrite(EN2,50);
    digitalWrite(D1,HIGH);  //left
    digitalWrite(D2,LOW);   //left
    digitalWrite(D3,LOW);   //right
    digitalWrite(D4,HIGH);  //right
   
  }
  else if((SS1==LOW) && (SS2==HIGH))  //LEFT TURN
  {
    analogWrite(EN1,20);
    analogWrite(EN2,80);
    digitalWrite(D1,LOW);  //left
    digitalWrite(D2,HIGH);   //left
    digitalWrite(D3,HIGH);   //right
    digitalWrite(D4,LOW);  //right
   
  }
}
