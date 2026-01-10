#define BLYNK_TEMPLATE_ID "TMPL3hA2eMrxp"
#define BLYNK_TEMPLATE_NAME "Smoke Detection"
#define BLYNK_AUTH_TOKEN "56ob0o9DtlYYA2TplYdGZ63I5afCfqIk"

#include<ESP8266WiFi.h>
#include<BlynkSimpleEsp8266.h>

char ssid[]="Reeya";
char pass[]="123456789";

int gas;
bool alertSent=false;

BlynkTimer timer;
void checkSensor()
{
gas=analogRead(A0);
pinMode(A0,INPUT);
pinMode(D1,OUTPUT);

Serial.print("Gas value :");
Serial.println(gas);
//Serial.println(gas>=750 ?" Gas detected":"no gas detected");

if(gas>=750 )
{
  digitalWrite(D1,HIGH);
  delay(500);

  Serial.println("Smoke is detected");
  Blynk.logEvent("smoke_detection"," Please Alert! Smoke is Detected!");
}
else
{
  digitalWrite(D1,LOW);
}
}

void setup()
{
  Serial.begin(115200);
  //pinMode(A0,INPUT); //pinMode(D1,OUTPUT);
  digitalWrite(D1,LOW);

  Blynk.begin(BLYNK_AUTH_TOKEN,ssid,pass);

  timer.setInterval(2000L,checkSensor);
}
void loop()
{
  Blynk.run();
  timer.run();
}