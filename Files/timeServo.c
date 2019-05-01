void timeServo(float time) {

  clearTimer(T1);
  
  bool temp = (SensorValue(servoMotor) > 126);
  
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
      
      setServo(servoMotor, SensorValue(servoMotor) + 1);
    
    }
  
  }

}
