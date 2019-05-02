# ROBOTC-Files
ROBOTC is easy to learn, but the documentation provided by PLTW is garbage. Here you go!



# startServo info:

startServo([Positive|Negative])(motorIndex, double speed, bool loop, float time);

startServoPositive() - Move the servo motor in the positive direction (towards 127)
startServoNegative() - Move the servo motor in the negative direction (towards -127)

motorIndex - the name of your servo motor (i.e. servoMotor)
speed - the rate at which your servo motor moves (0.1 - 127, will bug out as it approaches 127. 0.5 - 1 is a good speed)
loop - whether or not you want the servo motor to reset its position to the opposite direction (true, false)
time - number of seconds your servo motor will turn

startServoPositive(servoMotor, 1, false, 5); - servo will run for 5 seconds OR until the motor value is 127.
startServoPositive(servoMotor, 1, true, 20); - servo will run for 20 seconds, and will continue resetting the position during that duration.
