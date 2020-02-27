int relay = 2;
char data = 0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(relay, OUTPUT);
  //digitalWrite(relay, HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
if(Serial.available() > 0)      // Send data only when you receive data:
   {
      data = Serial.read();        //Read the incoming data & store into data
      Serial.print(data);          //Print Value inside data in Serial monitor
      Serial.print("\n");        
      if(data == '1')              // Checks whether value of data is equal to 1
      {
         Serial.print("On");
         digitalWrite(relay, HIGH);   //If value is 1 then LED turns ON
      }
      else if(data == '0')         //  Checks whether value of data is equal to 0
      {
         Serial.print("off");
         digitalWrite(relay, LOW);
      }
   }
}
