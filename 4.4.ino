#include <Keypad.h>

const byte ROWS = 4; // Dört satır
const byte COLS = 4; // Dört sütun
char keys[ROWS][COLS] = {
  {'1','2','3','A'}, 
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};
byte rowPins[ROWS] = {9, 8, 7, 6}; // Arduino'nun bağlı olduğu satır pinleri
byte colPins[COLS] = {5, 4, 3, 2}; // Arduino'nun bağlı olduğu sütun pinleri

Keypad keypad = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS );

void setup(){
  Serial.begin(9600);
}
  
void loop(){
  char key = keypad.getKey();
  
  if (key){
    Serial.println(key);
  }
}