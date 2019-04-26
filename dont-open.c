#pragma config(Sensor, in1,    lineFollower,   sensorLineFollower)
#pragma config(Sensor, in2,    potentiometer,  sensorPotentiometer)
#pragma config(Sensor, in3,    lightSensor,    sensorReflection)
#pragma config(Sensor, dgtl1,  limitSwitch,    sensorTouch)
#pragma config(Sensor, dgtl2,  bumpSwitch,     sensorTouch)
#pragma config(Sensor, dgtl3,  quad,           sensorQuadEncoder)
#pragma config(Sensor, dgtl5,  sonar,          sensorSONAR_inch)
#pragma config(Sensor, dgtl12, green,          sensorLEDtoVCC)
#pragma config(Motor,  port1,           flashlight,    tmotorVexFlashlight, openLoop, reversed)
#pragma config(Motor,  port2,           rightMotor,    tmotorVex269_MC29, openLoop)
#pragma config(Motor,  port3,           leftMotor,     tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port9,           servoMotor,    tmotorServoStandard, openLoop)

void runMotors() {

  int motorCount = 0;
  // initializes a varible named motorCount, used below.
  
  while (motorCount  < 3) { // will run until motorCount = 3
  
    startMotor(rightMotor, 95);
    
    wait(2);
    
    stopMotor(rightMotor);
    
    wait(2);
    
    motorCount++; // adds 1 to motorCount
  
  }

}

void findBiggestPotentiometerValue() {

  int biggest = 0;
  
  while (true) {
  
    while (SensorValue(bumpSwitch) == 0) {
    
      // for some reason, PLTW doesn't want you to
      // press the bump switch. I don't care as to
      // why, but it's in the notes.
      
      if (SensorValue(potentiometer) > biggest) {
      
        biggest = SensorValue(potentiometer);
      
      }
    
    }
  
  }

}

void LEDControl() {

  while (true) {
  	
  	if (!SensorValue(bumpSwitch)) {
  		
  		turnFlashlightOff(flashlight);
  	
  	} else {
  	
  		turnFlashlightOn(flashlight);
  	
  	}
  
	}

}

task main() {

  runMotors();
  
  // findBiggestPotentiometerValue();
  
  // oh hey, they actually teach you how to make
  // methods (functions) in part three. Let me cover that!
  
  // on second thought, their methods of making a function (pun intended)
  // are ALSO garbage. It's very beginner-level and redundant, so let's fix that!
  
  // instead of defining the method at the top of the class, then defining it
  // below main(), just define the function on top!
  
  // jokes aside, either works just fine. no offense towards PLTW. Do whatever
  // makes you happy. (which is function on top)

  // LEDControl();

}
