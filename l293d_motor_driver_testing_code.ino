// Define the pin numbers
int motorRight1 = 7;
int motorRight2 = 8;
int motorLeft1 = 9;
int motorLeft2 = 10;

void setup() {
    // Set the pin modes of the above IO pins to OUTPUT
    pinMode(motorRight1, OUTPUT);
    pinMode(motorRight2, OUTPUT);
    pinMode(motorLeft1, OUTPUT);
    pinMode(motorLeft2, OUTPUT);
}

void loop() {
    // Turn the motor in one direction
    digitalWrite(motorRight1, LOW);
    digitalWrite(motorLeft1,LOW);
    digitalWrite(motorRight2, HIGH);
    digitalWrite(motorLeft2,HIGH);
}