
#include "WSLCD.h"
#include <U8g2lib.h>

// constructor
WSLCD::WSLCD() {
	display = new U8G2_SSD1306_128X64_NONAME_F_HW_I2C(U8G2_R0, /* reset=*/ U8X8_PIN_NONE);
}

// destructor
WSLCD::~WSLCD() {
  if (NULL != display) {
    delete display;
    display = NULL;
  }
}

//begin method
void WSLCD::begin(){
	display->begin();
}


void WSLCD::drawString() {
	display->clearBuffer();
	display->setDrawColor(1);
	display->setFont(u8g2_font_fub14_tf);	//font: "fub11,14,17"
	display->drawStr(5,40,"Hello class");
	display->sendBuffer();
}

