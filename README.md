# Blinking LED Face
Arduino code/schematic for a blinking LED face

## How it works
The code for the Arduino contains a loop that continuosly runs. The code sets the mouth LED pin to HIGH (The LEDs will turn on). Then the code sets the eye LEDs to high (Turns them on). Then there will be a 3000 millisecond delay. After the delay the eye LEDs' pin will be set to LOW (Turned off). The eye LEDs' pin will be set to low for 1000 milliseconds. After the 1000 millisecond delay the code will start again from the beginning.

## Wiring
![alt text](https://github.com/Linja82/Blinking-LED-Face/blob/master/LED_Face%20Schematic.png)
The cathode of the mouth and eye LEDs are connected to the Arduino's ground (GND). The anodes of the two eye LEDs are connected to the Arduino's digital pin 2, while the mouth LED's anodes are connected to the Arduino's digital pin 3.
