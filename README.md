# SimpleUltrasonic

This is an Arduino library for the HC-SR04 ultrasonic distance sensor. The library provides a simple interface for measuring distances using the HC-SR04 sensor without dependencies.

## How It Works

The HC-SR04 sensor uses ultrasonic waves to measure distances. This library handles the communication with the sensor and provides functions to measure distances in centimeters and inches.

When you create an instance of the SimpleUltrasonic class, you specify the trigger and echo pins connected to the sensor. Then, you can call the `measureDistanceInCM()` and `measureDistanceInInch()` methods to get the distance in centimeters and inches, respectively. These methods return the distance as a floating-point value, or `-1` if there was an error or timeout during the measurement.

## Features

- **Easy to use**: Simply create an instance of the SimpleUltrasonic class and call the measurement methods.
- **Error correction**: The library includes error correction to handle measurement timeouts and provide accurate distance readings.
- **No dependencies**: This library does not depend on any other libraries, making it easy to install and use.
- **Examples included**: The library comes with example sketches that demonstrate its usage.

## Installation

To install the library, download the SimpleUltrasonic library folder from the repository and place it in the Arduino libraries directory. You can find the Arduino libraries directory by going to `Sketch > Include Library > Manage Libraries` in the Arduino IDE.

## Usage

1. Include the `SimpleUltrasonic.h` header file in your sketch.
2. Create an instance of the SimpleUltrasonic class, specifying the trigger and echo pins connected to the HC-SR04 sensor.
3. Call the `measureDistanceInCM()` or `measureDistanceInInch()` methods to get the distance in centimeters or inches, respectively.

Refer to the example sketches included in the `examples` directory for more detailed usage instructions.

## Contributing

Contributions to this library are welcome. If you find any bugs or have suggestions for improvements, please open an issue in the GitHub repository. You can also submit pull requests if you've implemented new features or bug fixes.

## License

This library is licensed under the MIT License. See the `LICENSE` file for more information.

## External References

- [HC-SR04 Datasheet](https://cdn.sparkfun.com/datasheets/Sensors/Proximity/HCSR04.pdf)
