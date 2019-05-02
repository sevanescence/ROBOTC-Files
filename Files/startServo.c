bool checkServoCondition(tMotor motorIndex, bool loop, bool direction) {

  if (loop) {
  
    if (direction) setServo(motorIndex, -127);
      else setServo(motorIndex, 127);
    
    return true;
  
  }
  
  return false;

}

void startServoPositive(tMotor motorIndex, float speed, bool loop, float time) {

  bool temp = true;

  if (SensorValue(motorIndex) >= 127) {
  
    if (!checkServoCondition(motorIndex, loop, temp)) return;
  
  }
  
  clearTimer(T1);
  
  while (time1(T1) < (time * 1000)) {
  
    if (SensorValue(motorIndex) >= 127) {
    
      if (!checkServoCondition(motorIndex, loop, temp)) break;
    
    }
    
    setServo(motorIndex, SensorValue(motorIndex) + speed);
  
  }

}

void startServoNegative(tMotor motorIndex, float speed, bool loop, float time) {

  bool temp = false;
  
  if (SensorValue(motorIndex) <= -127) {
  
    if (!checkServoCondition(motorIndex, loop, temp)) return;
  
  }
  
  clearTimer(T1);
  
  while (time1(T1) < (time * 1000)) {
  
    if (SensorValue(motorIndex) <= -127) {
    
      if (!checkServoCondition(motorIndex, loop, temp)) break;
    
    }
    
    setServo(motorIndex, SensorValue(motorIndex) - speed);
  
  }

}
