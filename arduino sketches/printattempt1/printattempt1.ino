#include <SoftwareSerial.h>
SoftwareSerial mySerial(1,0);
int a=0;
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin 13 as an output.
  mySerial.begin(4800);

}

// the loop function runs over and over again forever
void loop() {
       // wait for a second
mySerial.print(a);
mySerial.print("lalala");
}


