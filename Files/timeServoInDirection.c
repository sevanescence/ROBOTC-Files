void timeServoPositive(float time) {
  
  if (SensorValue(servoMotor) >= 127) {
    return;
  }
  
  clearTimer(T1);
  
  while (time1(T1) < (time * 1000)) {
    
    if (SensorValue(servoMotor) >= 127) {
      break;
    }
    
    setServo(servoMotor, SensorValue(servoMotor) + 1);
    
  }
  
}

void timeServoNegative(float time) {
  
  if (SensorValue(servoMotor) <= -127) {
    return;
  }
  
  clearTimer(T1);
  
  while (time1(T1) < (time * 1000)) {
    
    if (SensorValue(servoMotor) <= -127) {
      break;
    }
    
    setServo(servoMotor, SensorValue(servoMotor) - 1);
    
  }
  
}
