#define LDRpin D3 // pin where we connected the LDR and the resistor

int LDRValue = 0;     // result of reading the analog pin

void setup() 
{
  pinMode(D3,INPUT);
  Serial.begin(9600); // sets serial port for communication
}

void loop()
{
  LDRValue = analogRead(LDRpin); // read the value from the LDR
  Serial.println(LDRValue);      // print the value to the serial port
  delay(100);                    // wait a little
}
