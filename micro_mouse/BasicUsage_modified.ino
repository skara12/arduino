// Demonstrates usage of MouseTo library(http://github.com/per1234/MouseTo).
// Connect pin 10 to ground to start mouse movements between (0, 0) and another point, which will probably not be (450, 0).
// Screen coordinates can be determined by opening the file extras/MousePosition.html included this library in your browser, then press F11 for full screen
// To determine the correction factor, divide 450(the target x coordinate) by the actual screen x coordinate reached and use the result with MouseTo.setCorrectionFactor().
// Some additional adjustment of the correction factor may be required to get accurate mouse pointer positioning.
// Setting a larger target coordinate will yield a more accurate correction factor.

#if ARDUINO > 10605
#include <Mouse.h>
#endif  //ARDUINO > 10605
#include <MouseTo.h>

//const byte pin = 10;

void setup() {
  Mouse.begin();
  MouseTo.setCorrectionFactor(1);
  //pinMode(pin, INPUT_PULLUP);
}

void loop() {
  
 // while (digitalRead(pin) == LOW) {
    MouseTo.setTarget(0, 0);
    while (MouseTo.move() == false) {}
    delay(1000);
  //Modify according to Screensize
    MouseTo.setTarget(200, 0);
    while (MouseTo.move() == false) {}
    delay(1000);
    Mouse.press();
    delay(10000);
    Mouse.release();
    delay(10000);
 // 
 }
