# Distance status using leds

As per the distance read As per the distance read, glow different led's to show differernt ranges of distance:

This Arduino code utilizes an ultrasonic sensor to measure distance, interpreting the data to control three LEDs (red, blue, and green) based on the measured distance. After setting up pin modes for the LEDs in the setup function, the loop continuously sends ultrasonic pulses, receives them, and calculates the distance. Depending on the distance range, it illuminates different LEDs: red for distances between 5 and 50 cm, blue for distances between 50 and 100 cm, green for distances between 100 and 150 cm, and turns off all LEDs otherwise. A brief delay follows before the next iteration, maintaining a consistent loop for distance measurement and LED control.

Tinkercad link - https://www.tinkercad.com/things/cjnXxLv1rqx-project
