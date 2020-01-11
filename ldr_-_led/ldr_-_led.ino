#define led 3
#define ldr A0
int x;
int ss=0;
void setup() {
  pinMode(led,OUTPUT);
  pinMode(ldr,INPUT);
  Serial.begin(9600);  //baud rate
}

void loop() {
  ss=analogRead(ldr);
  Serial.println(ss);
  //x=ss/4;
  //x=map(ss,200,900,0,255);
  //analogWrite(led,x);
  if(ss>400) digitalWrite(led,HIGH);
  else digitalWrite(led,LOW);
}
