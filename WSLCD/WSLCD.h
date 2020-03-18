

#ifndef WS_LCD_H
#define WS_LCD_H

#include <Arduino.h>
#include <U8g2lib.h>

class WSLCD {
  private:
//  U8GLIB_ST7920_128X64 *ptr_u8g;
  U8G2_SSD1306_128X64_NONAME_F_HW_I2C *display;//(U8G2_R0, /* reset=*/ U8X8_PIN_NONE);
  void draw();

  public:
  WSLCD();	//class constructor
  ~WSLCD();	//class deconstructor
  void begin();	//begin function
  void drawString();	//draw something
};

#endif // WS_LCD_H
