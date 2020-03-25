int led[8]={15,14,13,12,11,10,9,8};
void setup() {
for(int i=0;i<8;i++)
{
  pinMode(led[i],OUTPUT);
  }  

}

void loop() {
  for(int h=0;h<2;h++)
  {
    for(int j=0;j<8;j++)
    {
      digitalWrite(led[j],HIGH);
      delay(300);
    }
    for(int j=0;j<8;j++)
    {
      digitalWrite(led[j],LOW);
      delay(300);
    }
    }
  for(int j=0;j<8;j++)
    {
      digitalWrite(led[j],HIGH);
      digitalWrite(led[j-1],LOW);
      delay(300);
    }
      digitalWrite(led[7],LOW);
  for(int h=0;h<2;h++)
  {
    for(int j=0;j<8;j++)
    {
      digitalWrite(led[j],HIGH);
      delay(300);
    }
    for(int j=0;j<8;j++)
    {
      digitalWrite(led[j],LOW);
      delay(300);
    }
    }
    for(int j=8;j>=0;j--)
    {      
      digitalWrite(led[j-1],HIGH);
      digitalWrite(led[j],LOW);

      delay(300);
    }
      digitalWrite(led[0],LOW);
}
