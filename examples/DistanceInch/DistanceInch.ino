#include <SimpleUltrasonic.h>

// Create an instance of the SimpleUltrasonic class and set the trigger and echo pins.
SimpleUltrasonic sensor(2, 3);

void setup()
{
    // Initialize serial communication at 9600 baud.
    Serial.begin(9600);
    sensor.begin();
}

void loop()
{
    // Measure the distance in inches.
    float distanceInch = sensor.measureDistanceInInch();

    // If the distance measurement was successful, print it to the serial monitor.
    if (distanceInch != -1)
    {
        Serial.print("Distance in Inches: ");
        Serial.print(distanceInch);
        Serial.println(" inches");
    }
    else
    {
        // If the distance measurement failed, print an error message.
        Serial.println("Error: Measurement timeout");
    }

    // Wait for 1 second before the next reading.
    delay(1000);
}
