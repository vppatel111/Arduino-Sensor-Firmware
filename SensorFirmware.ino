/*
  ReadAnalogVoltage
  Reads an analog input on pin 0, converts it to voltage, and prints the result to the serial monitor.
  Graphical representation is available using serial plotter (Tools > Serial Plotter menu)
  Attach the center pin of a potentiometer to pin A0, and the outside pins to +5V and ground.

  This example code is in the public domain.
*/

// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input on analog pin 0 and 1:
  int sensorValue1 = analogRead(A0);
  int sensorValue2 = analogRead(A1);
  int sensorValue3 = analogRead(A2);
  int sensorValue4 = analogRead(A3);
  int sensorValue5 = analogRead(A4);
  int sensorValue6 = analogRead(A5);
  
  // Convert the analog reading (which goes from 0 - 1023) to a voltage (0 - 5V):
  float voltage1 = sensorValue1 * (5.0 / 1023.0);
  float voltage2 = sensorValue2 * (5.0 / 1023.0);
  float voltage3 = sensorValue3 * (5.0 / 1023.0);
  float voltage4 = sensorValue4 * (5.0 / 1023.0);
  float voltage5 = sensorValue5 * (5.0 / 1023.0);
  float voltage6 = sensorValue6 * (5.0 / 1023.0);

  Serial.print("A1");
  Serial.print(voltage1);
  Serial.print("E");
  Serial.print("A2");
  Serial.print(voltage2);
  Serial.print("E");
  Serial.print("A3");
  Serial.print(voltage3);
  Serial.print("E");
  Serial.print("A4");
  Serial.print(voltage4);
  Serial.print("E");
  Serial.print("A5");
  Serial.print(voltage5);
  Serial.print("E");
  Serial.print("A6");
  Serial.print(voltage6);
  Serial.print("E");
  
  
  // print out the value you read:

//  int messageCounter = 12;
//  int incomingByte = 0;
//
//  do {
//    while (!(Serial.available() > 0)) {}
//    
//      incomingByte = Serial.read();
//  
//      // Wait for acknowledgement before sending each message
//      if (incomingByte == 65) {
//        messageCounter -= 1;

//        switch (messageCounter) {
//        case 11:
//          Serial.print("A1");
//          break;
//        case 10:
//          Serial.print(voltage1);
//          break;
//        case 9:
//          Serial.print("A2");
//          break;
//        case 8:
//          Serial.print(voltage2);
//          break;
//        case 7:
//          Serial.print("A3");
//          break;
//        case 6:
//          Serial.print(voltage3);
//          break;
//        case 5:
//          Serial.print("A4");
//          break;
//        case 4:
//          Serial.print(voltage4);
//          break;
//        case 3:
//          Serial.print("A5");
//          break;
//        case 2:
//          Serial.print(voltage5);
//          break;
//        case 1:
//          Serial.print("A6");
//          break;
//        case 0:
//          Serial.print(voltage6);
//          break;
//      }
//      
//      }
//
//    } while (messageCounter > 0);

  delay(1000);
  
}
