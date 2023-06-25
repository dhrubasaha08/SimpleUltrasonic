#ifndef SimpleUltrasonic_h
#define SimpleUltrasonic_h

#include "Arduino.h"

// HC_SR04 class for measuring distance using the HC-SR04 sensor.
class SimpleUltrasonic
{
public:
    /*
    Constructor.
    @param trig The pin number connected to the trigger pin of sensor.
    @param echo The pin number connected to the echo pin of sensor.
    */
    SimpleUltrasonic(int trig, int echo);

    // Initializes the sensor.
    void begin();

    // Measures the distance in centimeters.
    float measureDistanceInCM();

    // Measures the distance in inches.
    float measureDistanceInInch();

private:
    int _trig;
    int _echo;

    // Sends the start signal to the sensor.
    void startSignal();

    // Measure the duration of echo pulse
    byte counter();
};

#endif