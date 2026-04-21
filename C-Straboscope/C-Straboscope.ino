// Straboscope with help LED and Potentiometr
#define potentiometr_pin A0; // Define Potentiometr pin 

#define pin_10 = 10;         // Define red LED
#define pin_11 = 11;         // Define Green LED

void setup() 
{
  pinMode(pin_10, OUTPUT); // Initialize pin 10 as output
  pinMode(pin_11, OUTPUT); // Initialize pin 11 as output
}

void loop() 
{
  // Read analog data at potentiometr and convert to values 10 - 500
  int analogValue = map(analogRead(potentiometr_pin), 0, 1023, 10, 500);

  // Blink first LED's line
  digitalWrite(pin_10, HIGH);
  delay(analogValue);
  digitalWrite(pin_10, LOW);
  delay(analogValue);
  digitalWrite(pin_10, HIGH);
  delay(analogValue);
  
  // Turn OFF first LED's line, and blink second LED's line
  digitalWrite(pin_11, HIGH);
  digitalWrite(pin_10, LOW);
  delay(analogValue);
  digitalWrite(pin_11, LOW);
  delay(analogValue);
  digitalWrite(pin_11, HIGH);
  delay(analogValue);
  digitalWrite(pin_11, LOW);
}
