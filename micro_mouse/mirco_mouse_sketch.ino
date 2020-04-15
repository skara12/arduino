#include <Mouse.h>
#include <MouseTo.h>


int i=1;
int x=0;
int y=0;

void setup() {
  // put your setup code here, to run once:
Mouse.begin();
//Factor = 200/563 = 0.35
MouseTo.setCorrectionFactor(0.35);
//MouseTo.setScreenResolution(1025, 1280);

//MouseTo.setScreenResolution(1080, 1920);
}

void loop() {

delay(1000);

if(i==0){
  
  //MouseTo.setTarget(436, 1719);
  //while (MouseTo.move() == false) {}
  //delay(500);
  //Mouse.press();
  //Mouse.move(0,-1600,0);
  //Mouse.release();

}
else if(i==1){
 // MouseTo.setScreenResolution(1080, 1920);
    MouseTo.setTarget(0 , 0);
  while (MouseTo.move() == false) {}
 // delay(500);
 // Mouse.click();
  delay(1000);
x =MouseTo.getTargetX();
y =MouseTo.getTargetY();
Serial.print(x, DEC);
Serial.print("\t");
Serial.print(y, DEC);
Serial.print("\n");
  //Mouse.move(20,80,0);
 // Mouse.move(100,0,0); 
 //     Mouse.move(100,0,0); 
 //  delay(500);
 //   Mouse.move(0,-100,0); 
 //     Mouse.move(0,-100,0); 
 // delay(500);
 // Mouse.move(0,-100,0); 
 //     Mouse.move(0,-100,0); 
 //delay(500);
 //Mouse.move(0,-100,0); 
 //     Mouse.move(0,-100,0); 
 //delay(500);
 //Mouse.move(0,-100,0); 
 //     Mouse.move(0,-100,0); 
 //delay(500);
 //Mouse.move(0,-100,0); 
 //     Mouse.move(0,-100,0); 

 // Mouse.move(-200,-900,0);
  MouseTo.setTarget(200, 900,false);
  while (MouseTo.move() == false) {}
  delay(1000);
  Mouse.click();
  delay(1000);
x =MouseTo.getTargetX();
y =MouseTo.getTargetY();

Serial.print(x, DEC);
Serial.print("\t");
Serial.print(y, DEC);
Serial.print("\n");
 //  Mouse.move(0,-100,0); 
 //     Mouse.move(0,-100,0); 

  //Mouse.move(0,-200,0);
  MouseTo.setTarget(200, 1100,false);
  while (MouseTo.move() == false) {}
  delay(1000);
  Mouse.click();
  delay(1000);
x =MouseTo.getTargetX();
y =MouseTo.getTargetY();

Serial.print(x, DEC);
Serial.print("\t");
Serial.print(y, DEC);
Serial.print("\n");
  
 //  Mouse.move(0,-100,0); 
 //     Mouse.move(0,-100,0); 

  //Mouse.move(0,-200,0);
  MouseTo.setTarget(200, 1300,false);
  while (MouseTo.move() == false) {}
  delay(1000);
  Mouse.click();
  delay(1000);
x =MouseTo.getTargetX();
y =MouseTo.getTargetY();

Serial.print(x, DEC);
Serial.print("\t");
Serial.print(y, DEC);
Serial.print("\n");

  // Mouse.move(100,0,0); 
  //    Mouse.move(100,0,0); 
// delay(500);
// Mouse.move(100,0,0); 
   //   Mouse.move(100,0,0); 
 //delay(500);
 //Mouse.move(100,0,0); 
 //     Mouse.move(100,0,0); 
 //delay(500);
 //Mouse.move(50,0,0); 
      
  
  // Mouse.move(-650,0,0);
  MouseTo.setTarget(850, 1300,false);
  while (MouseTo.move() == false) {}
  delay(1000);
  Mouse.click();
  delay(1000);
x =MouseTo.getTargetX();
y =MouseTo.getTargetY();

Serial.print(x, DEC);
Serial.print("\t");
Serial.print(y, DEC);
Serial.print("\n");
  // Mouse.move(0,-100,0); 
  //    Mouse.move(0,-100,0); 

   //Mouse.move(0,-200,0); 
 MouseTo.setTarget(850, 1500,false);
  while (MouseTo.move() == false) {}
  delay(1000);
  Mouse.click();
  delay(1000);
x =MouseTo.getTargetX();
y =MouseTo.getTargetY();

Serial.print(x, DEC);
Serial.print("\t");
Serial.print(y, DEC);
Serial.print("\n");
  
  
}else{

i=10;
  
}

i++;
  // put your main code here, to run repeatedly:
//Mouse.click();
//delay(500);
//Mouse.move(0,-100,0);
//delay(100);
//Mouse.press();
//Mouse.move(0,200,0);
//Mouse.release();
//Mouse.end();
}
