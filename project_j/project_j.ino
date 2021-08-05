#define CAYENNE_DEBUG
#define CAYENNE_PRINT Serial
#include <CayenneMQTTESP8266.h>

#define light1 D1
#define light2 D2
#define light3 D3
#define light4 D4

char ssid[] = "enter your ssid";
char wifiPassword[] = "enter your password";

 
char username[] = "username";
char password[] = "pwd";
char clientID[] = "client id";

unsigned long lastMillis = 0;



void setup() {
  Serial.begin(9600);
  Cayenne.begin(username, password, clientID, ssid, wifiPassword);
  pinMode(light1,OUTPUT);
  pinMode(light2,OUTPUT);
  pinMode(light3,OUTPUT);
  pinMode(light4,OUTPUT);
  
}

void loop() {
  Cayenne.loop();
}
CAYENNE_IN(1){

digitalWrite(light1,!getValue.asInt());
}

CAYENNE_IN(2){

digitalWrite(light2,!getValue.asInt());
}

CAYENNE_IN(3){

digitalWrite(light3,!getValue.asInt());
}

CAYENNE_IN(4){

digitalWrite(light4,!getValue.asInt());
}


 
