int eyeOutPin = 2;                    // Output pin for the eye LEDs
int mouthOutPin = 3;                  // Output pin for the mouth LEDs

void setup() {
  pinMode(eyeOutPin, OUTPUT);         // Sets the pin that controls the eye LEDs to output mode
  pinMode(mouthOutPin, OUTPUT);       // Sets the pin that controls the mouth LEDs to output mode
}

void loop() {                         // Code that will run continuously upon startup
    digitalWrite(mouthOutPin, HIGH);  // Sets the mouth LED's output pin to high (Turns the LEDs on)
    digitalWrite(eyeOutPin, HIGH);    // Sets the eye LED's output pin to high (Turns the LEDs on)
    delay(3000);                      // Waits for 3000 milliseconds (The amount of time that the eyes are "open" for
    digitalWrite(eyeOutPin, LOW);     // Sets the eye LED's outut pin to low (Turns the LEDs off)
    delay(550);                       // Waits for 550 milliseconds (The amount of time that the eyes are "closed" for
}
