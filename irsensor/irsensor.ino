int irobstacle=D7;
int  obstacle=HIGH ;
void setup()
{
  pinMode(D7,INPUT);
  Serial.begin(9600);

}

void loop() {
  obstacle=digitalRead(irobstacle);
  if(obstacle==HIGH)
  {
    Serial.println("obstacle");
    
  }
  else
  {
    Serial.println("clear");
  }
  delay(200);
}
