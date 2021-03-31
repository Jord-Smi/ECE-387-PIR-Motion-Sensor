# ECE-387-PIR-Motion-Sensor

The PIR Motion Sensor is a rather simple sensor to use. It uses Infrared to detect changes in heat to see if there has been any movement. The only includes needed are avr/io and util/delay, no special libraries are required.

The wiring is also quite simple. Hook up an LED to the Arduino Board like you normally would, then the sensor itself only has three pins: power, output, and ground.

It may be smart to test your sensor using the provided Arduino Test Code to make sure it works. Make use of the Serial Monitor, it will give you the information you need where a 1 is motion detected and a 0 is no motion detected.

The avr-gcc compile lines for the C code have also been provided for convenience.

Important things to keep in mind: 
1.) The newer versions of the sensor have adjustable settings for the time delay and the sensitivity. Make sure to run tests with those to get the outcome you desire if your sensor has them.
2.) Make note of the set of 3 pins and jumper on the bottom of the sensor. Those tell the sensor what mode to be in: retriggering or nonretriggering. For most purposes, retriggering is the mode you want - the jumper is set between the two pins closest to the corner (pins may be different depending on your sensor, make sure to check the datasheet if you're not sure). Retriggering is the mode where the sensor is constantly searching for motion, while nonretriggering waits a moment inbetween each detection before checking again.
3.) Ensure you have a proper sensor. There are cheap sensors on Amazon, but, from my experience, they don't work very well. The best place to buy a sensor is from Adafruit, though it is a decent bit more expensive than on Amazon.
