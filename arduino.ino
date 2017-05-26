//TMP36 Pin Variables
int sensorPin = 1; 
//the analog pin the TMP36's Vout (sense) pin is connected to
//the resolution is 10 mV / degree centigrade with a
//500 mV offset to allow for negative temperatures
 
/*
 * setup() - this function runs once when you turn your Arduino on
 * We initialize the serial connection with the computer
 */
 
void setup()
{
 Serial.begin(9600);  //Start the serial connection with the computer
 pinMode(13, OUTPUT); //to view the result open the serial monitor 
}
 
void loop()
{
 // LYS!!!!
  int sensorValue = analogRead(A0);
  float voltageLight = sensorValue * (5.0 / 1023.0);
  Serial.print("Value: ");
  Serial.println(voltageLight);
   
  if (voltageLight > 2.00){ Serial.println ("Arbejdsmiljo er tilpas."); digitalWrite(13, LOW);}
  if (voltageLight < 2.00){ Serial.println ("Arbejdsmiljo er for morkt."); digitalWrite(13, HIGH);}

 // TEMP!!!!
 //getting the voltage reading from the temperature sensor
 int reading = analogRead(sensorPin);  
 
 // converting that reading to voltage, for 3.3v arduino use 3.3
 float voltage = reading * 5.0;
 voltage /= 1024.0; 

 // now print out the temperature
 float temperatureC = (voltage - 0.5) * 100 ;  //converting from 10 mv per degree wit 500 mV offset
                                               //to degrees ((voltage - 500mV) times 100)
Serial.print(temperatureC); Serial.println("C");

if (temperatureC > 27){ digitalWrite(13, HIGH); } 
if (temperatureC < 27){ digitalWrite(13, LOW);  } 

Serial.println(" ");
delay(1000);
}
