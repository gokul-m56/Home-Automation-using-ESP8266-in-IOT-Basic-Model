//Home atomation control iusing IOT
#include<ESP8266WiFi.h> //Lib include
#include<BlynkSimpleEsp8266.h>

//Blynk template,nam,token is define
#define BLYNK_TEMPLATE_ID "TMPL35DmT7M2F"
#define BLYNK_TEMPLATE_NAME "Lamp"
#define BLYNK_AUTH_TOKEN "XYT-G64DL-kmpTwrDaKr9df7kW0i9BlE"
char auth[]="XYT-G64DL-kmpTwrDaKr9df7kW0i9BlE";
//home hotspot name & password
char ssid[]="gk";
char pass[]="123456789a";
//Output digital pin define 
#define led1 D0
#define led2 D1
#define led3 D3
#define led4 D5
#define led5 D6
 //The conditions for automate & communicate for app &web dashboard
 //Light or Load 1
BLYNK_WRITE(V1){
  int val=param.asInt();
  Serial.println(val);
  if(val==1){
    digitalWrite(led1,HIGH);
    Blynk.virtualWrite(V8,"Now led 1 on");
  }
  else{
    digitalWrite(led1,LOW);
    Blynk.virtualWrite(V8,"Now led 1 off");
  }
}

 //Light or Load 2
BLYNK_WRITE(V2){
  int val=param.asInt();
  Serial.println(val);
  if(val==1){
    digitalWrite(led2,HIGH);
    Blynk.virtualWrite(V8,"Now led 2 on");
  }
  else{
    digitalWrite(led2,LOW);
    Blynk.virtualWrite(V8,"Now led 2 off");
  }
}
 //Light or Load 3
BLYNK_WRITE(V3){
  int val=param.asInt();
  Serial.println(val);
  if(val==1){
    digitalWrite(led3,HIGH);
    Blynk.virtualWrite(V8,"Now led 3 on");
  }
  else{
    digitalWrite(led3,LOW);
    Blynk.virtualWrite(V8,"Now led 3 off");
  }
}
 //Light or Load 4
BLYNK_WRITE(V4){
  int val=param.asInt();
  Serial.println(val);
  if(val==1){
    digitalWrite(led4,HIGH);
    Blynk.virtualWrite(V8,"Now led 4 on");
  }
  else{
    digitalWrite(led4,LOW);
    Blynk.virtualWrite(V8,"Now led 4 off");
  }
}
 //Light or Load 5
BLYNK_WRITE(V5){
  int val=param.asInt();
  Serial.println(val);
  if(val==1){
    digitalWrite(led5,HIGH);
    Blynk.virtualWrite(V8,"Now led 5 on");
  }
  else{
    digitalWrite(led5,LOW);
    Blynk.virtualWrite(V8,"Now led 5 off");
  }
}

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200); //baud rate set
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);
  pinMode(led5,OUTPUT);
  Serial.println("Welcome");
  digitalWrite(LED_BUILTIN, HIGH); 
  delay(1000);
  digitalWrite(LED_BUILTIN, LOW);
  Serial.println();
  Serial.println("Wifi connecting to");
  Serial.println(ssid);
  WiFi.begin(ssid,pass);
  Serial.println();
  Serial.println("Connecting");
  while(WiFi.status() != WL_CONNECTED){
    digitalWrite(LED_BUILTIN, HIGH);
    delay(500);
    digitalWrite(LED_BUILTIN, LOW);
    delay(500);
    Serial.print(".");
  }
  Serial.println();
  Serial.println("Wifi connected sucess");
  Serial.println(WiFi.localIP() );
  

  Blynk.begin(auth,ssid,pass);
 
}

void loop() {
  
  Blynk.run();

}
