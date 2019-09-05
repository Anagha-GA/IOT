#define dht_dpin 7 //no ; here. Set equal to channel sensor is on
#include<dht.h>
dht DHT;

int sensorValue = 0;  // variable to store the value coming from the sensor
const int analogInPin = A0; 
void setup()
{
  Serial.begin(9600);
  
  delay(3000);//Let system settle
   
}//end "setup()"

void loop(){
  //dht11 code.
    DHT.read11(dht_dpin);
    Serial.print("Current humidity = ");
    Serial.print(DHT.humidity);
    Serial.print("%  ");
    Serial.print("\n  ");
    Serial.print("temperature = ");
    Serial.print(DHT.temperature); 
    Serial.print("C  ");
    Serial.print("\n  ");
     sensorValue = analogRead(analogInPin);
      Serial.print("sensor = ");
 
  Serial.println(sensorValue);
    delay(3000);

  
}








