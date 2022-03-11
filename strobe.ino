
const int pin_strobe = 12;

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin 13 as an output.
  pinMode(pin_strobe, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(pin_strobe, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(25);              // wait for a second
  digitalWrite(pin_strobe, LOW);    // turn the LED off by making the voltage LOW
  delay(25);              // wait for a second
}
