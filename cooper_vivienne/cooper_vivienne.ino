int cooper=13;
int vivienne=12;

void setup() {
  // put your setup code here, to run once:
  pinMode(cooper, OUTPUT);
  pinMode(vivienne, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(cooper, HIGH);
  digitalWright(vivienne, HIGH);
  delay(1000);
  digitalWrite(cooper, LOW);
  digitalWright(vivienne, LOW);
  delay(1000);
}
