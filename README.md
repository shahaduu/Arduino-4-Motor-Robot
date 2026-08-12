# 4 DC Motors Control with L293D Driver

## Project Overview

This project demonstrates the control of four DC motors using an Arduino Uno and L293D motor driver ICs. The system is simulated using Tinkercad and follows a predefined movement sequence.

The motors perform the following actions:

1. **Forward Motion:** All four motors move forward for 30 seconds.
2. **Backward Motion:** All four motors move backward for 60 seconds.
3. **Alternating Turns:** The motors alternate between left and right turns every second for a total of 60 seconds.
4. **Stop:** The motors stop for 5 seconds before the sequence starts again.

## Components Used

* Arduino Uno
* 2 × L293D Motor Driver ICs
* 4 × DC Motors
* External DC Power Supply or Battery
* Breadboard
* Jumper Wires

## Circuit Pin Mapping

| Component | Arduino Pin | Function             |
| --------- | ----------: | -------------------- |
| IN1       |           2 | Left Motors Control  |
| IN2       |           3 | Left Motors Control  |
| IN3       |           4 | Right Motors Control |
| IN4       |           5 | Right Motors Control |

## Movement Sequence

| Action                         |   Duration |
| ------------------------------ | ---------: |
| Move Forward                   | 30 seconds |
| Move Backward                  | 60 seconds |
| Alternate Left and Right Turns | 60 seconds |
| Stop                           |  5 seconds |

The complete movement cycle takes **155 seconds (2 minutes and 35 seconds)**.

## How to Run the Simulation

1. Open Tinkercad Circuits.
2. Create a new circuit and connect the Arduino, L293D drivers, and four DC motors.
3. Open the code editor and select **Text** mode.
4. Copy the Arduino code into the editor.
5. Start the simulation to observe the motor movement.

## Code Structure

The program uses separate functions to control the different movements:

* `moveForward()` moves the motors forward.
* `moveBackward()` moves the motors backward.
* `turnLeft()` turns the system left.
* `turnRight()` turns the system right.
* `stopMotors()` stops all motors.

The `loop()` function controls the sequence and uses `delay()` to determine the duration of each movement.

## Conclusion

This project demonstrates the basic control of multiple DC motors using an Arduino Uno and L293D motor drivers. The predefined sequence provides a simple example of controlling motor direction and movement timing in an Arduino-based system.
