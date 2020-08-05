#define ir 8 

void setup()
{
  pinMode(ir,INPUT);
  Serial.begin(9600);
}

void loop()
{
  int val=digitalRead(ir);
  Serial.print("value = ");
  Serial.println(val);
  delay(1000);
}
