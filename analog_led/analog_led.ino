#define led 3

void setup() {
  pinMode(led,OUTPUT);

}

void loop() {
  analogWrite(led,25);
  delay(1000);
  analogWrite(led,255);
  delay(1000);
}
