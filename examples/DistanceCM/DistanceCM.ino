#include "SimpleUltrasonic.h"

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
    // Measure the distance in centimeters.
    float distanceCM = sensor.measureDistanceInCM();

    // If the distance measurement was successful, print it to the serial monitor.
    if (distanceCM != -1)
    {
        Serial.print("Distance in CM: ");
        Serial.print(distanceCM);
        Serial.println(" cm");
    }
    else
    {
        // If the distance measurement failed, print an error message.
        Serial.println("Error: Measurement timeout");
    }

    // Wait for 1 second before the next reading.
    delay(1000);
}
