#define p A0
int ss=0;
void setup() {
  pinMode(p,INPUT);
  Serial.begin(9600);  //baud rate
  //bit per second communication between arduino and pc 
}

void loop() {
  ss=analogRead(p);
  Serial.println(ss);
}
