
int tess=13;
int emily=12;
int amelia=11;

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(tess, OUTPUT);
  pinMode(emily, OUTPUT);
  pinMode(amelia, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(tess, HIGH);  // turn the LED on (HIGH is the voltage level)
  digitalWrite(emily, HIGH); 
  digitalWrite(amelia, HIGH); 
  delay(1000);                      // wait for a second
  digitalWrite(tess, LOW);  // turn the LED on (HIGH is the voltage level)
  digitalWrite(emily, LOW); 
  digitalWrite(amelia, LOW);   // turn the LED off by making the voltage LOW
  delay(1000);                      // wait for a second
}
