/* Write 'Hello World' thru Arduino, using Morse Code
 * Kwangju Kim
 */

int pin;

void setup() {
  // put your setup code here, to run once:
  int pin = 13;
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
  delay(500);

  // E *
  digitalWrite(pin, HIGH);
  delay(500);
  digitalWrite(pin, LOW); 
  delay(500);

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
  delay(500);

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
  delay(500);

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
  delay(500);

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
  delay(500);

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
  delay(500);

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
  delay(500);

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
  delay(500);

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
  delay(500);
}
