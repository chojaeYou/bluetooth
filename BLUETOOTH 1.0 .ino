#include <SoftwareSerial.h>
SoftwareSerial bt(7,6);

int RED = 11;
int BLUE = 10;
char message;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(RED,OUTPUT);
  pinMode(BLUE,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(bt.available()>0){
    message = bt.read();
    Serial.println(message);
  }

  switch(message){
    case '1': digitalWrite(RED,HIGH); break;
    case '2': digitalWrite(RED,LOW); break;
    case '3': digitalWrite(BLUE,HIGH); break;
    case '4': digitalWrite(BLUE,LOW); break;
  }
}
// https://m.blog.naver.com/PostView.naver?blogId=sisosw&logNo=221518491098&categoryNo=8&proxyReferer=
