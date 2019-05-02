void timeServoPositive(tMotor motorIndex, float time, double speed) {
  
  if (SensorValue(motorIndex) >= 127) {
    setServo(motorIndex, -127);
  }
  
  clearTimer(T1);
  
  while (time1(T1) < (time * 1000)) {
    
    if (SensorValue(motorIndex) >= 127) {
      setServo(motorIndex, -127);
      continue;
    }
    
    setServo(motorIndex, SensorValue(motorIndex) + speed);
    
  }
  
}

void timeServoNegative(tMotor motorIndex, float time, double speed) {
  
  if (SensorValue(motorIndex) <= -127) {
    setServo(motorIndex, 127);
  }
  
  clearTimer(T1);
  
  while (time1(T1) < (time * 1000)) {
    
    if (SensorValue(motorIndex) <= -127) {
      setServo(motorIndex, 127);
      continue;
    }
    
    setServo(motorIndex, SensorValue(motorIndex) - speed);
    
  }
  
}
