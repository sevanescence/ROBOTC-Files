bool checkServoCondition(tMotor motorIndex, bool loop, bool direction) { // this method is used in startServo()

  if (loop) { // checks if the servo motor was told to loop
  
    if (direction) setServo(motorIndex, -127);
      else setServo(motorIndex, 127);
    
    return true;
  
  }
  
  return false;

}

void startServoPositive(tMotor motorIndex, float speed, bool loop, float time) {

  bool temp = true;

  if (SensorValue(motorIndex) >= 127) {
  
    if (!checkServoCondition(motorIndex, loop, temp)) return; // checks for a loop and resets the motor
  
  }
  
  clearTimer(T1);
  
  while (time1(T1) < (time * 1000)) {
  
    if (SensorValue(motorIndex) >= 127) {
    
      if (!checkServoCondition(motorIndex, loop, temp)) break; // checks for a loop and resets the motor
    
    }
    
    setServo(motorIndex, SensorValue(motorIndex) + speed);
  
  }

}

void startServoNegative(tMotor motorIndex, float speed, bool loop, float time) {

  bool temp = false;
  
  if (SensorValue(motorIndex) <= -127) {
  
    if (!checkServoCondition(motorIndex, loop, temp)) return; // checks for a loop and resets the motor
  
  }
  
  clearTimer(T1);
  
  while (time1(T1) < (time * 1000)) {
  
    if (SensorValue(motorIndex) <= -127) {
    
      if (!checkServoCondition(motorIndex, loop, temp)) break; // checks for a loop and resets the motor
    
    }
    
    setServo(motorIndex, SensorValue(motorIndex) - speed);
  
  }

}
