int athena = 13;
int annabelle=12;
void setup() {
  // put your setup code here, to run once:
  pinMode(athena,OUTPUT);
  pinMode(annabelle,OUTPUT);
}
  
void loop() {
  digitalWrite(athena, HIGH);
  digitalWrite(annabelle, HIGH);
  delay (1000);
  digitalWrite (athena, LOW);
  digitalWrite(annabelle, LOW);
  delay (1000);
  // put your main code here, to run repeatedly:
}
