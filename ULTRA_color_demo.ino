#include <SPI.h>
#include <SSD_13XX.h>
//
#include "_images/sw1.c"
#include "_images/nature.c"




#define __CS1   8
#define __DC 	9
#define __RST 9

SSD_13XX tft1 = SSD_13XX(__CS1, __DC, __RST);


void setup()
{
	tft1.begin();
	tft1.setRotation(0);
	tft1.drawImage(0, 0, &sw1);
}

void loop()
{
    tft1.drawImage(0, 0, &sw1);
    delay(5000);
    tft1.drawImage(0, 0, &nature);   
    delay(5000);

}
