/* Write 'Hello World' thru Arduino, using Morse Code
 * Kwangju Kim
 */

int pin;

void setup() {
  // put your setup code here, to run once:
  pin = 13;
  pinMode(pin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  // H ****
  digitalWrite(pin, HIGH);
  delay(500);
  digitalWrite(pin, LOW); 
  delay(500);
  digitalWrite(pin, HIGH);
  delay(500);
  digitalWrite(pin, LOW); 
  delay(500);
  digitalWrite(pin, HIGH);
  delay(500);
  digitalWrite(pin, LOW); 
  delay(500);
  digitalWrite(pin, HIGH);
  delay(500);
  digitalWrite(pin, LOW); 
  delay(1000);

  // E *
  digitalWrite(pin, HIGH);
  delay(500);
  digitalWrite(pin, LOW); 
  delay(1000);

  // L *-**
  digitalWrite(pin, HIGH);
  delay(500);
  digitalWrite(pin, LOW); 
  delay(500);
  digitalWrite(pin, HIGH);
  delay(1000);
  digitalWrite(pin, LOW); 
  delay(500);
  digitalWrite(pin, HIGH);
  delay(500);
  digitalWrite(pin, LOW); 
  delay(500);
  digitalWrite(pin, HIGH);
  delay(500);
  digitalWrite(pin, LOW); 
  delay(1000);

  // L *-**
  digitalWrite(pin, HIGH);
  delay(500);
  digitalWrite(pin, LOW); 
  delay(500);
  digitalWrite(pin, HIGH);
  delay(1000);
  digitalWrite(pin, LOW); 
  delay(500);
  digitalWrite(pin, HIGH);
  delay(500);
  digitalWrite(pin, LOW); 
  delay(500);
  digitalWrite(pin, HIGH);
  delay(500);
  digitalWrite(pin, LOW); 
  delay(1000);

  // O ---
  digitalWrite(pin, HIGH);
  delay(1000);
  digitalWrite(pin, LOW); 
  delay(500);
  digitalWrite(pin, HIGH);
  delay(1000);
  digitalWrite(pin, LOW); 
  delay(500);
  digitalWrite(pin, HIGH);
  delay(1000);
  digitalWrite(pin, LOW); 
  delay(1000);

  // W *--
  digitalWrite(pin, HIGH);
  delay(500);
  digitalWrite(pin, LOW);
  delay(500);
  digitalWrite(pin, HIGH);
  delay(1000);
  digitalWrite(pin, LOW);
  delay(500);
  digitalWrite(pin, HIGH);
  delay(1000);
  digitalWrite(pin, LOW);
  delay(1000);

  // O ---
  digitalWrite(pin, HIGH);
  delay(1000);
  digitalWrite(pin, LOW); 
  delay(500);
  digitalWrite(pin, HIGH);
  delay(1000);
  digitalWrite(pin, LOW); 
  delay(500);
  digitalWrite(pin, HIGH);
  delay(1000);
  digitalWrite(pin, LOW); 
  delay(1000);

  // R *-*
  digitalWrite(pin, HIGH);
  delay(500);
  digitalWrite(pin, LOW);
  delay(500);
  digitalWrite(pin, HIGH);
  delay(1000);
  digitalWrite(pin, LOW);
  delay(500);
  digitalWrite(pin, HIGH);
  delay(500);
  digitalWrite(pin, HIGH);
  delay(1000);

  // L *-**
  digitalWrite(pin, HIGH);
  delay(500);
  digitalWrite(pin, LOW); 
  delay(500);
  digitalWrite(pin, HIGH);
  delay(1000);
  digitalWrite(pin, LOW); 
  delay(500);
  digitalWrite(pin, HIGH);
  delay(500);
  digitalWrite(pin, LOW); 
  delay(500);
  digitalWrite(pin, HIGH);
  delay(500);
  digitalWrite(pin, LOW); 
  delay(1000);

  // D -**
  digitalWrite(pin, HIGH);
  delay(1000);
  digitalWrite(pin, LOW); 
  delay(500);
  digitalWrite(pin, HIGH);
  delay(500);
  digitalWrite(pin, LOW); 
  delay(500);
  digitalWrite(pin, HIGH);
  delay(500);
  digitalWrite(pin, LOW); 
  delay(1000);
}

void writeLong() {
  digitalWrite(pin, HIGH);
  delay(1000);
}

void writeShort() {
  digitalWrite(pin, HIGH);
  delay(500);
}

void closeLong() {
  digitalWrite(pin, LOW);
  delay(1000);
}

void closeShort() {
  digitalWrite(pin, LOW);
  delay(500);
}
