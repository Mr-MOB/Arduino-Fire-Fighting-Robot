// define the pin to which the relay module is connected
int relayPin = 12;

void setup() {
  // set the relay pin as an output
  pinMode(relayPin, OUTPUT);
}

void loop() {
  // turn the relay on for 2 seconds
  //digitalWrite(relayPin, LOW);
  digitalWrite(relayPin, HIGH);
}
