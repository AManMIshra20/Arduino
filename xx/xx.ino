#define led 3
#define p A0
int x;
int ss=0;
void setup() {
  pinMode(led,OUTPUT);
  pinMode(p,INPUT);
  Serial.begin(9600);  //baud rate
}

void loop() {
  ss=analogRead(p);
  Serial.println(ss);
  x=ss/4;
  analogWrite(led,x);
}
