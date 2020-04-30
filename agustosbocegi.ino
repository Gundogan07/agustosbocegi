int pot=A0;
const int dizi1[]={2,3,4,5};
const int dizi2[]={8,9,10,11};
int durum=0;
int buzzer=13;
void setup()
{
  pinMode(buzzer,OUTPUT);
  pinMode(pot,INPUT);
  Serial.begin(9600);
  for(int k=1;k<=4;k++)
  {
    pinMode(dizi1[k],OUTPUT);
    }
    for(int t=1;t<=4;t++)
    {
      pinMode(dizi2[t],OUTPUT);
      }
      }
      void loop()
      {
        Serial.println(durum);
        delay(10);
        durum=analogRead(pot);
        if(durum<500)
        {
          tone(buzzer,20,200); //(pin,frekans 'sesin tizliğini ayarlıyo',süre)
          for(int k=0;k<=3;k++)
          {
            digitalWrite(dizi1[k],HIGH);
            delay(100);
            digitalWrite(dizi1[k],LOW);
            }
            for(int k=3;k>=0;k--)
            {
              digitalWrite(dizi1[k],HIGH);
              delay(100);
              digitalWrite(dizi1[k],LOW);
              }
              }
              else
              {
                tone(buzzer,50,500);
                for(int t=0;t<=3;t++)
                {
                  digitalWrite(dizi2[t],HIGH);
                  delay(100);
                  digitalWrite(dizi2[t],LOW);
                  }
                  for(int t=3;t>=0;t--)
                  {
                    digitalWrite(dizi2[t],HIGH);
                    delay(100);
                    digitalWrite(dizi2[t],LOW);
                    }
                    }
                    }
