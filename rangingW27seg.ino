/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the Uno and
  Leonardo, it is attached to digital pin 13. If you're unsure what
  pin the on-board LED is connected to on your Arduino model, check
  the documentation at http://www.arduino.cc

  This example code is in the public domain.

  modified 8 May 2014
  by Scott Fitzgerald
 */
 

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin 13 as an output.
  pinMode(46, OUTPUT);
  pinMode(47, OUTPUT);
  pinMode(48, OUTPUT);
  pinMode(49, OUTPUT);
  pinMode(50, OUTPUT);
  pinMode(51, OUTPUT);
  pinMode(53, OUTPUT);
  //the tens 7-seg
  
  pinMode(36, OUTPUT);
  pinMode(37, OUTPUT);
  pinMode(38, OUTPUT);  
  pinMode(39, OUTPUT);
  pinMode(40, OUTPUT);
  pinMode(41, OUTPUT); 
  pinMode(43, OUTPUT);   
  
}

// the loop function runs over and over again forever
void loop() {
  writeValue(1);   // turn the LED on (HIGH is the voltage level)
  delay(1000);              // wait for a second
  writeValue(2);// turn the LED off by making the voltage LOW
  delay(1000);  
  writeValue(3);
  delay(1000);
  writeValue(4);
  delay(1000);
  writeValue(5);   // turn the LED on (HIGH is the voltage level)
  delay(1000);              // wait for a second
  writeValue(6);// turn the LED off by making the voltage LOW
  delay(1000);  
  writeValue(7);
  delay(1000);
  writeValue(8);
  delay(1000);
    writeValue(9);   // turn the LED on (HIGH is the voltage level)
  delay(1000);     
      writeValue(10);   // turn the LED on (HIGH is the voltage level)
  delay(1000);   // wait for a second
        writeValue(11);   // turn the LED on (HIGH is the voltage level)
  delay(1000); 
}

void writeValue( int in){
  if( in <=10){
    digitalWrite(36,1);
    digitalWrite(37,1);
    digitalWrite(38,1);
    digitalWrite(39,1);
    digitalWrite(40,1);
    digitalWrite(41,1);
    digitalWrite(43,1);

    if(in==1){
      digitalWrite(48,1);
      digitalWrite(46,1);//1
      digitalWrite(49,1);
      digitalWrite(51,1);
      digitalWrite(53,0);
      digitalWrite(50,0);  
      digitalWrite(47,1);

    }
    else if(in==2){
      digitalWrite(48,0);
      digitalWrite(46,0);//2
      digitalWrite(49,1);
      digitalWrite(51,0);
      digitalWrite(53,0);
      digitalWrite(50,1);  
      digitalWrite(47,0);
    }
    else if(in==3){
      digitalWrite(48,0);
      digitalWrite(46,1);//3
      digitalWrite(49,1);
      digitalWrite(51,0);
      digitalWrite(53,0);
      digitalWrite(50,0);  
      digitalWrite(47,0);
    }
    else if (in ==4){
      
      digitalWrite(48,1);
      digitalWrite(46,1);//4
      digitalWrite(49,0);
      digitalWrite(51,1);
      digitalWrite(53,0);
      digitalWrite(50,0);  
      digitalWrite(47,0);
    }
    else if (in ==5){
      digitalWrite(48,0);
      digitalWrite(46,1);//5
      digitalWrite(49,0);
      digitalWrite(51,0);
      digitalWrite(53,1);
      digitalWrite(50,0);  
      digitalWrite(47,0);
    }
    else if (in ==6){
      digitalWrite(48,0);
      digitalWrite(46,0);//6
      digitalWrite(49,0);
      digitalWrite(51,0);
      digitalWrite(53,1);
      digitalWrite(50,0);  
      digitalWrite(47,0);
    }
    else if (in ==7){
      digitalWrite(48,1);
      digitalWrite(46,1);//7
      digitalWrite(49,1);
      digitalWrite(51,0);
      digitalWrite(53,0);
      digitalWrite(50,0);  
      digitalWrite(47,1);
    }
    else if (in ==8){
      digitalWrite(48,0);
      digitalWrite(46,0);//8
      digitalWrite(49,0);
      digitalWrite(51,0);
      digitalWrite(53,0);
      digitalWrite(50,0);  
      digitalWrite(47,0);
    }
  }
  }
else if (in ==3){
    digitalWrite(36,1);
  digitalWrite(37,1);
  digitalWrite(38,1);
  digitalWrite(39,1);
  digitalWrite(40,1);
  digitalWrite(41,1);
  digitalWrite(43,1);
  

}


else if (in ==6){
  
  digitalWrite(48,0);
  digitalWrite(46,0);//6
  digitalWrite(49,0);
  digitalWrite(51,0);
  digitalWrite(53,1);
  digitalWrite(50,0);  
  digitalWrite(47,0);
}


else if (in ==9){
    digitalWrite(36,1);
  digitalWrite(37,1);
  digitalWrite(38,1);
  digitalWrite(39,1);
  digitalWrite(40,1);
  digitalWrite(41,1);
  digitalWrite(43,1);
  
  digitalWrite(48,0);
  digitalWrite(46,1);//9
  digitalWrite(49,0);
  digitalWrite(51,0);
  digitalWrite(53,0);
  digitalWrite(50,0);  
  digitalWrite(47,0);
}
else if (in ==10){
    digitalWrite(36,1);
  digitalWrite(37,1);
  digitalWrite(38,1);
  digitalWrite(39,1);
  digitalWrite(40,0);
  digitalWrite(41,1);
  digitalWrite(43,0);
  
  digitalWrite(48,0);
  digitalWrite(46,0);//10
  digitalWrite(49,0);
  digitalWrite(51,0);
  digitalWrite(53,0);
  digitalWrite(50,0);  
  digitalWrite(47,1);
}

else if (in ==11){
    digitalWrite(36,1);
  digitalWrite(37,1);
  digitalWrite(38,1);
  digitalWrite(39,1);
  digitalWrite(40,0);
  digitalWrite(41,1);
  digitalWrite(43,0);
  
  digitalWrite(48,1);
  digitalWrite(46,1);//11
  digitalWrite(49,1);
  digitalWrite(51,1);
  digitalWrite(53,0);
  digitalWrite(50,0);  
  digitalWrite(47,1);
}

else if (in ==12){
    digitalWrite(36,1);
  digitalWrite(37,1);
  digitalWrite(38,1);
  digitalWrite(39,1);
  digitalWrite(40,0);
  digitalWrite(41,1);
  digitalWrite(43,0);
  
  digitalWrite(48,1);
  digitalWrite(46,1);//11
  digitalWrite(49,1);
  digitalWrite(51,1);
  digitalWrite(53,0);
  digitalWrite(50,0);  
  digitalWrite(47,1);
}

else{
  digitalWrite(36,1);
  digitalWrite(37,1);
  digitalWrite(38,1);
  digitalWrite(39,1);
  digitalWrite(40,1);
  digitalWrite(41,1);
  digitalWrite(43,1);
  
  
 digitalWrite(2,1);
 digitalWrite(3,0);
 digitalWrite(4,0);
 digitalWrite(5,0);
 digitalWrite(6,0);
 digitalWrite(7,0);
 digitalWrite(8,1);
}
}

