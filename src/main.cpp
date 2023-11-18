
#include <MD_Parola.h>
#include <MD_MAX72xx.h>
#include <SPI.h>

#define HARDWARE_TYPE MD_MAX72XX::FC16_HW
#define MAX_DEVICES 4
#define CS_PIN 3

MD_Parola myDisplay = MD_Parola(HARDWARE_TYPE, CS_PIN, MAX_DEVICES);

void setup()
{
  myDisplay.begin();
  myDisplay.setIntensity(0);
  myDisplay.displayClear();
}

int main()
{
  while (1)
  {
    myDisplay.setTextAlignment(PA_LEFT);
    myDisplay.print(1);
    delay(2000);

    myDisplay.setTextAlignment(PA_CENTER);
    myDisplay.print(2);
    delay(2000);

    myDisplay.setTextAlignment(PA_RIGHT);
    myDisplay.print(3);
    delay(2000);

    myDisplay.setTextAlignment(PA_CENTER);
    myDisplay.setInvert(true);
    myDisplay.print(4);
    delay(2000);

    myDisplay.setInvert(false);
    myDisplay.print(1234);
    delay(2000);
  }
}
