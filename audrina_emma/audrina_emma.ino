
int emma=13; 
int audrina=12;
void setup() {
  // put your setup code here, to run once:
  pinMode(emma, OUTPUT); 
  pinMode (audrina, OUTPUT);  
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(emma, HIGH);
  digitalWrite (audrina,HIGH);
  delay(1000);
  digitalWrite (emma,LOW);
  digitalWrite (audrina, LOW);
  delay (1000);

}
