
#include <TM1637Display.h>
#define CLK 2 
#define DIO 3
TM1637Display display(CLK, DIO); 
void setup() {
display.setBrightness(7); 
}
void loop() {
for (int num = 0; num <= 9999; num++) {
display.showNumberDec(num, false); 
delay(1000);
}
}