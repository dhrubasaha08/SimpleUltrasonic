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
    // Measure the distance in centimeters.
    float distanceCM = sensor.measureDistanceInCM();

    // Measure the distance in inches.
    float distanceInch = sensor.measureDistanceInInch();

    // If the distance measurements were successful, print them to the serial monitor.
    if (distanceCM != -1 && distanceInch != -1)
    {
        Serial.print("Distance in CM: ");
        Serial.print(distanceCM);
        Serial.println(" cm");

        Serial.print("Distance in Inches: ");
        Serial.print(distanceInch);
        Serial.println(" inches");
    }
    else
    {
        // If any of the distance measurements failed, print an error message.
        Serial.println("Error: Measurement timeout");
    }

    // Wait for 1 second before the next reading.
    delay(1000);
}
