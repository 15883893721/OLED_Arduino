#include <Arduino.h>
#include <U8g2lib.h>
#include <U8x8lib.h>

#define type 3 //type 0--3; type=0 is SSD1306_0.96(SPI); type=1 is SH1106_1.3(SPI); type=2 is SSD1306_0.96(I2C); type=3 is SH1106_1.3(I2C);

#if (type==1 || type==0)
#include <SPI.h>
#elif(type==3 || type==2) 
#include <Wire.h>
#endif

#if (type==0)
  U8G2_SSD1306_128X64_NONAME_F_4W_HW_SPI u8g2(U8G2_R0, /* cs=*/ 10, /* dc=*/ 9, /* reset=*/ 8);// clock= 13,  data（MOSI）= 11
#elif(type==1)
    U8G2_SH1106_128X64_NONAME_F_4W_SW_SPI u8g2(U8G2_R0, /* clock=*/ 13, /* data(MOSI)=*/ 11, /* cs=*/ 10, /* dc=*/ 9, /* reset=*/ 8);
#elif(type==2)
      U8G2_SSD1306_128X64_NONAME_F_HW_I2C u8g2(U8G2_R0, /* reset=*/ U8X8_PIN_NONE);
#elif(type==3)
        U8G2_SH1106_128X64_NONAME_F_HW_I2C u8g2(U8G2_R0, /* reset=*/ U8X8_PIN_NONE);
#endif

void setup() {
  // put your setup code here, to run once:
u8g2.begin();
  u8g2.enableUTF8Print();  
    u8g2.clear();//清除屏幕上的显示,清除内部缓冲区
}

void loop() {
  // put your main code here, to run repeatedly:
    u8g2.clearBuffer();         // 清除内部缓冲区
     u8g2.setFont(u8g2_font_ncenB08_tr); // choose a suitable font
     u8g2.drawStr(20,15,"Hello World!");  // write something to the internal memory
     u8g2.drawStr(5,35,"Heltec Automation");  // write something to the internal memory
     u8g2.drawStr(30,60,"2019_9_25");
  u8g2.sendBuffer();          // transfer internal memory to the display
  delay(2000); 
  u8g2.clear();
      u8g2.setFont(u8g2_font_unifont_t_chinese2); 
       u8g2.setCursor(10, 20);
       u8g2.print("你好世界"); 
       u8g2.drawStr(10,45,"Just Do It!"); 
       u8g2.sendBuffer();
  delay(2000);
}
