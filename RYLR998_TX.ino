
String lora_band = "865000000"; //enter band as per your country
String lora_networkid = "5";    //enter Lora Network ID
String lora_address = "1";      //enter Lora address
String lora_RX_address = "2";   //enter Lora RX address

#define button1 8  
#define button2 9
   
void setup()
{
  // put your setup code here, to run once:
 // Serial.begin(9600);
  Serial.begin(115200);

  
  delay(1500);
  Serial.println("AT+BAND=" + lora_band);
  delay(500);
  Serial.println("AT+ADDRESS=" + lora_address);
  delay(500);
  Serial.println("AT+NETWORKID=" + lora_networkid);
 delay(1500);


  pinMode(button1, INPUT_PULLUP);
  pinMode(button2, INPUT_PULLUP);

}

void loop()
{
   if (digitalRead(button1) == LOW){
  Serial.println("AT+SEND="+ lora_RX_address +",2,FB");
  delay(50);
   }
    if (digitalRead(button2) == LOW){
  Serial.println("AT+SEND="+ lora_RX_address +",2,RB");
  delay(50);
   }   
}
