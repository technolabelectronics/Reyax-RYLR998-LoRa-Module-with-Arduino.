
 
String lora_band = "865000000"; //enter band as per your country
String lora_networkid = "5";    //enter Lora Network ID
String lora_address = "2";      //enter Lora address
String lora_RX_address = "1";   //enter Lora RX address (for sending)

#define RelayPin1 10 
#define RelayPin2 11

String incomingString;

void setup()
{
  
  pinMode(RelayPin1, OUTPUT);
  pinMode(RelayPin2, OUTPUT);
  
  
  Serial.begin(115200);
   
  
  delay(1500);
  Serial.println("AT+BAND=" + lora_band);
  delay(500);
  Serial.println("AT+NETWORKID=" + lora_networkid);
  delay(500);
  Serial.println("AT+ADDRESS=" + lora_address);
  delay(1000);
  
}

void loop()
{ 
    if(Serial.available()) {
    incomingString = Serial.readString();
    //Serial.println(incomingString);
    if(incomingString.indexOf("FB") >0) {
        digitalWrite(RelayPin1, !digitalRead(RelayPin1));
      
    }
    if(incomingString.indexOf("RB") >0) {
         digitalWrite(RelayPin2, !digitalRead(RelayPin2));
      
      
    }
     
    
     
    }
    
    }
