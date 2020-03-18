#include "Arduino.h"
#include <WSLCD.h>


WSLCD display;
void setup(void) {
	display.begin();

}

void loop(void) {
	display.drawString();
	delay(100);
}
