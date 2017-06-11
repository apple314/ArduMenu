#include <Myled.h>
Myled l;

void setup(){
  Serial.begin(9600);
  l.init();  
}

void loop(){
  for (byte i=1;i<5;i++){
    l.setTextSize(i);
    l.showMsg((String)i);
    delay(500);   
  }
}
