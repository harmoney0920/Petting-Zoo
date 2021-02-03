//CricketBoard
//Harmony Petty

int light = A2;
int cricket = 0;
void setup() {
 // Serial.begin(9600);
  // put your setup code here, to run once:
pinMode(cricket,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
int value = analogRead(light);
//Serial.println(value);
if (value <100){
  tone(cricket,13000);
  delay(500);
  noTone(cricket);
  delay(750);
}else if(value > 100){
noTone(cricket);

}
}
