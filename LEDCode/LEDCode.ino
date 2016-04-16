//  _ ___ _______ 	___ ___ ___  ___ _   _ ___ _____ ___
// / |_  )__ /   \   / __|_ _| _ \/ __| | | |_ _|_   _/ __|
// | |/ / |_ \ |) | | (__ | ||   / (__| |_| || |  | | \__ \
// |_/___|___/___/   \___|___|_|_\\___|\___/|___| |_| |___/
//
// Shift Reg
//
// Made by Patrick Cutno and Patryk Giza
// License: CC-BY-SA 3.0
// Downloaded from: https://123d.circuits.io/circuits/1856304-shift-reg

//Global Variables all functions can address
int led1=8;   	 //Arduino pin 8 connected to shift
   				 //register latch pin. Used to output
   				 //all eight bits all at once.

int led2=9;    //Arduino pin 12 connected to shift
   				 //register clock pin. Used to shift
   				 //single bits into the IC.

int led3=10;   	 //Arduino pin 11 connected to shift
   				 //register data pin. Input pin of
   				 //the shift register.


int analogPin=0;    //Arduino pin A0 connected to
   				 //thermistor. Read analog voltage from
   				 //thermistor's voltage division circuit

int lightLevel=0;    //Variable used to store analog value
   				 //read by the "analogPin"







//The setup() function is called when a sketch starts.
//Use it to initialize variables, pin modes, start using
//libraries, etc. The setup function will only run once,
//after each powerup or reset of the Arduino board.
void setup()
{
      //Initialize a serial monitor to view the value
	//measured from the thermistor
    Serial.begin(9600);    
 
      //Define arduino pins as output pins
    pinMode(led1, OUTPUT);
    pinMode(led2,OUTPUT);
    pinMode(led3, OUTPUT);
}

//After creating a setup() function, which initializes and sets
//the initial values, the loop() function does precisely what
//its name suggests, and loops consecutively, allowing your
//program to change and respond. Use it to actively control the
//Arduino board.
void loop()
{
      //Read and store the value from the thermistor
    lightLevel = analogRead(analogPin);
    
 
      //If the light level is above the arbitrary
      //value of 360, turn the red LED on
	 if(lightLevel>360){
	    digitalWrite(led1, 1);
            digitalWrite(led2, 0);
           digitalWrite(led3, 0); 
   	
	 }
 
      //Else, if the light level is between
      //the arbitrary 340 and 360, turn the yellow LED on
	 else if(lightLevel>340){
	    digitalWrite(led1, 0);
            digitalWrite(led2, 1);
           digitalWrite(led3, 0); 
   	
    }
 
      //Else, if the light level is below
      //the arbitrary value of 340, turn the green LED on
    else{
	    digitalWrite(led1, 0);
            digitalWrite(led2, 0);
           digitalWrite(led3, 1); 
   	
   	 
    }
    
 
      //Print the light level to the serial monitor
      Serial.println(lightLevel);
   	 
    //Wait one second before repeating the loop function.
      //The arduino operates at 16 MHz, adding a delay allows
      //the user to observe the change in LED's and serial monitor
    delay(1000);
}





