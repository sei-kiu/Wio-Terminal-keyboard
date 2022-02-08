#include <Arduino.h>

#include <Keyboard.h> //keyboard library 
 
void setup() { 
  //set button pins as inputs
  pinMode(WIO_KEY_A, INPUT);
  pinMode(WIO_KEY_B, INPUT);
  pinMode(WIO_KEY_C, INPUT);
 
  Keyboard.begin(); //start keyboard communication
}
 
void loop() {  
  if (digitalRead(WIO_KEY_A) == LOW) { //detect button press
    Keyboard.write('s'); //single key is pressed (character) 
  }
  if (digitalRead(WIO_KEY_B) == LOW) {   
    Keyboard.write('h');
    Keyboard.write('e');
    Keyboard.write('l');
    Keyboard.write('l');
    Keyboard.write('o');
  }  
  if (digitalRead(WIO_KEY_C) == LOW) {        
    Keyboard.write('d');  
  } 
 
  delay(200); //delay between keypresses
 
}