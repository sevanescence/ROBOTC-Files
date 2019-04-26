void callLightSensorForFlashlight() {

  while (true) {
  
    if (SensorValue(lightSensor) > 700) {
      // SensorValue is the function used for measuring
      // the values of the input sensor. Writing
      // (lightSensor > 700) will not work. lightSensor
      // is not a value, it's an object.
    
      turnFlashlightOn(flashlight, 127);
    
    } else {
    
      turnFlashlightOff(flashlight);
    
    }
  
  }

}

void checkLimitSwitchAndLightSensorForFlashligh() {

  while (true) {
  
    while(SensorValue(limitSwitch) != 0) {
    
      if (SensorValue(lightSensor > 700) {
      
        turnFlashlightOn(flashlight, 127);
      
      } else {
      
        turnFlashlightOff(flashlight);
      
      }
    
    }
  
  }

}

void toggleLEDTimer() {

  ClearTimer(T1); // initializes the timer used below.
  
  while (time1(T1) < 20000) { // 20000 milliseconds = 20 seconds.
    // the timer will count as time passes, and will stop at
    // 20000 milliseconds.
    // Note that time1(T1) returns the amount of time that has passed
    // since ClearTimer(T1). You will need this knowledge when doing
    // the Advanced Project in POE!
  
    turnLEDOn(green);
    
    wait(2);
    
    turnLEDOff(green);
    
    wait(2);
  
  }

}

task main() {

  callLightSensorForFlashlight(); // executes "void callLightSensorForFlashlight()" defined above.
  // writing your code neatly like this makes it
  // a lot easier to disable entire sections of your
  // code to test other parts of your project.
  
  checkLimitSwitchAndLightSensorForFlashlight();
  
  // careful! don't forget that everything is case-sensitive.
  
  toggleLEDTimer();
  
  // try part 4 on your own. if im in your class, ask me anything.

}
