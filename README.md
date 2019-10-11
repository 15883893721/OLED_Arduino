# OLED_Arduino
#### 1. preparation

​	***If you want to modify the code to became other models, you must have make sure already installed [Arduino](https://www.arduino.cc/en/Main/Software) software on your computer.***

​	***You need download a library named  "u8g2"  on your [Arduino](https://www.arduino.cc/en/Main/Software)*** .



#### 2. File composition

****| OLED***

***|----------SSD1306***

***|  			|-----------IIC***

***| 			 |                  |-------UNO***

***|  			|				  |-------[ESP32(Wireless Stick Lite)](https://heltec.org/project/wireless-stick-lite/)***

***|  			|-----------SPI***

***|  			|                  |-------UNO***

***|  			|				  |-------[ESP32(Wireless Stick Lite)](https://heltec.org/project/wireless-stick-lite/)***

***|----------SH1106***

​				***|-----------IIC***

​				***|                  |-------UNO***

​				***|				  |-------[ESP32(Wireless Stick Lite)](https://heltec.org/project/wireless-stick-lite/)***

​				***|-----------SPI***

​				                    ***|-------UNO***

​				  				  ***|-------[ESP32(Wireless Stick Lite)](https://heltec.org/project/wireless-stick-lite/)***

