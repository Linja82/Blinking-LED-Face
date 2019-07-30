# Blinking-LED-Face
Arduino code/schematic for a blinking LED face

# How it works
The code for the Arduino contains a loop that continuosly runs. The code sets the mouth LED pin too HIGH (The LEDs will turn on). Then the code sets the eye LEDs to high (Turns them on). Then there will be a 3000 millisecond delay. After the delay the eye LEDs' pin will be set to LOW (Turned off). The eye LEDs' pin will be set to low for 1000 milliseconds. After the 1000 millisecond delay the code will start again from the beginning.
