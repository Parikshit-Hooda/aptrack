const int AOUTpin=0;
const int DOutpin=8;
const int ledPin=13;

int limit;
int val;


void setup()
{
  Serial.begin(9600);
  pinMode(DOUTpin,INPUT);
  pinMode(ledPin,OUTPUT);
}


void loop()
{
  val=analogRead(AOUTpin);
  limit=digitalRead(DOUTpin);
  Serial.println("CO value: ");
  Serial.println(val);
  Serial.println("Limit: ");
  Serial.println(limit);
  delay(100);
  if(limit==HIGH)
  {
    Serial.println("Alarm");
  }
  else
  {
    Serial.println("OK");
  }
   
}