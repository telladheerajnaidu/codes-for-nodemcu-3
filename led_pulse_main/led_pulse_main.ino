// Robo India Tutorial 
// Digital Input and Output on LED 
// Hardware: NodeMCU

const int LED_ao = 15;
void setup()  {    
  pinMode(LED_ao, OUTPUT); 
}  
void loop()  { 
  for (int brightness=1; brightness<=255; brightness++)  
    {
      analogWrite(LED_ao, brightness);  
      delay(10);                         
    }
  for (int brightness=255; brightness>0; brightness--) 
    {
      analogWrite(LED_ao, brightness);  
      delay(10);     
    }                           
}
