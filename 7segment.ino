void setup()
{
  // define pin modes
  
 pinMode(2,OUTPUT);
 pinMode(3,OUTPUT);
 pinMode(4,OUTPUT);
 pinMode(5,OUTPUT);
 pinMode(6,OUTPUT);
 pinMode(7,OUTPUT);
 pinMode(8,OUTPUT);
 pinMode(9,OUTPUT);
 pinMode(10,OUTPUT);
 pinMode(11,OUTPUT);
 pinMode(12,OUTPUT);
 pinMode(13,OUTPUT);
 pinMode(14,OUTPUT);
 pinMode(15,OUTPUT);

 pinMode(36, OUTPUT);
 
}

void loop() 
{
  // loop to turn leds od seven seg ON
  
  for(int i=2;i<15;i++)
  {
    digitalWrite(i,HIGH);
    delay(200);
  }
  
  // loop to turn leds od seven seg OFF
  for(int i=2;i<15;i++)
  {
    digitalWrite(i,LOW);
    delay(200);
  }
  
  
  delay(500);

}
