//CalmCat
//Harmony Petty

#include <CapacitiveSensor.h>
int purr = 1; //motor transistor is connected to pin 3
CapacitiveSensor  button1= CapacitiveSensor(4,2);
const int thresh = 400;

void setup()
{
  pinMode(purr, OUTPUT);
}

void loop()
{
  long touch1 =  button1.capacitiveSensor(30);

  if(touch1>thresh){
    digitalWrite(purr, HIGH); //vibrate
    }  
  else{
    digitalWrite(purr, LOW);  //stop vibrating
 }
}
