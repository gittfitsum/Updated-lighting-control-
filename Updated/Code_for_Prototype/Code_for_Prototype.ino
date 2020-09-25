const int ledPin = 10;
const int inputPin = 7;
const int led2pin = 9;
const int input2pin = 8;
int LED = 3;
int LDR = A0;
void setup()
{
  pinMode(ledPin, OUTPUT);//Declare ledPin as output
  pinMode(inputPin, INPUT);//Declare inputPin as an input
  pinMode(led2pin, OUTPUT);//Declare ledPin as an output
  pinMode(input2pin, INPUT);//Declare input2pin as an input
  pinMode(LED, OUTPUT);//Declare LED as an output
  pinMode(LDR, INPUT);//Declare LDR as an input
}

void lamp1()
{
  int LDRValue = analogRead(LDR); //Read LDR Value
  int PIR1Value = digitalRead(inputPin); //Read PIR vlaue
  
  if (( 500 > LDRValue) && (PIR1Value == HIGH)) //if LDR value is lessthan 500 and PIR sensor high
  {
    digitalWrite(ledPin, LOW);//Turn OFF the LED
    delay(500);
  }
  else
  {
    digitalWrite(ledPin, HIGH);//Turn ON LED
  }
}
void lamp2()
{
  int LDRValue = analogRead(LDR);//Read LDR Value
  int PIR2Value = digitalRead(input2pin); //Read PIR vlaue

  
  if ((500 > LDRValue) && (PIR2Value == HIGH)) //if LDR value is lesthan 500 and PIR sensor high
  {
    {
      digitalWrite(led2pin, LOW);//Turn ON the LED
       delay(500);
    }
  }
  else
  {
    digitalWrite(led2pin, HIGH);//Turn OFF LED
   
  }
}
void loop()
{
  lamp1();//run continoiusly lamp 1's function
  lamp2();//run continoiusly lamp 2's function
}
