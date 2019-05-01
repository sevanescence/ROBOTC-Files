void timeServo(float time) {
  
  bool temp = !(SensorValue(servoMotor) > 126);

  clearTimer(T1);
  
  while (time1(T1) < (time * 1000)) {
  
    if (temp) {
    
      if (SensorValue(servoMotor) < -126) {
      
        temp = !temp;
        
        continue;
      
      }
      
      setServo(servoMotor, SensorValue(servoMotor) + 1);
    
    } else {
    
      if (SensorValue(servoMotor) > 126) {
      
        temp = !temp;
        
        continue;
      
      }
      
      setServo(servoMotor, SensorValue(servoMotor) - 1);
    
    }
  
  }

}
