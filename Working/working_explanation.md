# Working Explanation

This Pick and Place Robot uses five servo motors controlled by five potentiometers.

## How It Works
1. Each potentiometer provides an analog voltage to the Arduino.
2. Arduino reads the analog value (0–1023).
3. The value is mapped to a servo angle (0–180°).
4. Each servo moves according to its potentiometer position.
5. The gripper opens and closes manually using its dedicated potentiometer.

## Servo Functions
- Servo 1: Base rotation
- Servo 2: Waist movement
- Servo 3: Shoulder movement
- Servo 4: Wrist movement
- Servo 5: Gripper control

## Result
The robotic arm can pick, move, and place objects smoothly with real-time manual control.
