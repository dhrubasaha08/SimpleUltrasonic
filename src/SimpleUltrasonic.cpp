#include "SimpleUltrasonic.h"

// Initializes the pins and sets it to output mode.
SimpleUltrasonic::SimpleUltrasonic(int trig, int echo)
{
  _trig = trig;
  _echo = echo;
}

// Initializes the sensor.
void SimpleUltrasonic::begin()
{
  pinMode(_trig, OUTPUT);
  pinMode(_echo, INPUT);
}

// Sends the start signal to the sensor.
void SimpleUltrasonic::startSignal()
{
  digitalWrite(_trig, LOW);
  delayMicroseconds(2);
  digitalWrite(_trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(_trig, LOW);
}

// Reads a byte of data from the sensor.
byte SimpleUltrasonic::counter()
{
  pinMode(_echo, INPUT);

  unsigned long duration = pulseIn(_echo, HIGH, 30000); // Add timeout of 30ms (30,000 microseconds)

  if (duration == 0)
  {
    // Timeout occurred, return an error code
    return 255;
  }
  else
  {
    // Calculate distance based on duration
    return duration / 29 / 2;
  }
}

// Measures the distance in centimeters. Returns -1 if the checksum is incorrect.
float SimpleUltrasonic::measureDistanceInCM()
{
  startSignal();
  byte distance = counter();

  if (distance == 255)
  {
    // Error occurred, return -1 as distance
    return -1;
  }
  else
  {
    return distance;
  }
}

// Measures the distance in inches. Returns -1 if the checksum is incorrect.
float SimpleUltrasonic::measureDistanceInInch()
{
  startSignal();
  byte distance = counter();

  if (distance == 255)
  {
    // Error occurred, return -1 as distance
    return -1;
  }
  else
  {
    return distance * 0.3937;
  }
}