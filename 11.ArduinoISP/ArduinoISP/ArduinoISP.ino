int water=A0;

void setup(){
  Serial.begin(9600);
}

void loop(){
  int a=analogRead(water);

  Serial.print("water level is: ");
  Serial.println(a);
  
  delay(20);
}
