#define led 13
#define switch1 0
#define switch2 1
#define led2 11
int ss = 0;
int ss2 = 0;
void setup() 
{
  pinMode(led,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(switch1, INPUT);
  pinMode(switch2, INPUT);
}

void loop()
{
  ss=digitalRead(switch1);
  ss2=digitalRead(switch2);
  
  if(ss==HIGH && ss2==HIGH )
  { 
    digitalWrite(led,HIGH);
    digitalWrite(led2,HIGH);
  }
  else if(ss==LOW && ss2==LOW)
  {
    digitalWrite(led,LOW);
    digitalWrite(led2,LOW);
  }
  else if(ss2==HIGH && ss==LOW)
  {
    digitalWrite(led,LOW);
    digitalWrite(led2,HIGH);
  }
  else 
  {
     digitalWrite(led,HIGH);
     digitalWrite(led2,LOW);
  
  }
  
}
