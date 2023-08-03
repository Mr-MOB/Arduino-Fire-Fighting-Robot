int flamePin = 4; // Digital pin connected to the flame sensor module

void setup() {
  Serial.begin(9600); // Initialize serial communication
  pinMode(flamePin, INPUT); // Set the flame sensor pin as input
}

void loop() {
  int flameValue = digitalRead(flamePin); // Read the flame sensor value

  if (flameValue == 0) { // If flame is detected, print a message on the serial monitor
    Serial.println("Flame detected!");
  }
  else {
    Serial.println("Flame not detected!");
  }
  
  delay(5000); // Wait for half a second before taking the next reading
}
