#include <RH_ASK.h>
#include <SPI.h> // Not actually used but needed to compile

RH_ASK driver;
// RH_ASK driver(2000, 2, 4, 5); // ESP8266: do not use pin 11

void setup()
{
    Serial.begin(9600);    // Debugging only
    if (!driver.init())
         Serial.println("init failed");
}

void loop()
{
    const char *msg = "hello";

    driver.send((uint8_t *)msg, strlen(msg));
    driver.waitPacketSent();
    delay(200);
}
