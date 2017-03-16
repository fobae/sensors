/*
 * (c) Clement Trosa, the Domobee project
 * Date: jeudi 16 mars 2017, 12:51:42 (UTC+0100)
 * Description: The sim900 simplification library
 * Tested on Seedstudio v2 shield.
 * More information @ github.com/domobee/sensors
 */

#include "Arduino.h"
#include "sim900.h"
#include <SoftwareSerial.h>

Sim900::Sim900(int pincode)
{
  _pincode = pincode;
  Serial.println("Stated sim900, please power on the shield");
  SoftwareSerial gprs(7,8); // Instanciate the shield

  if(gprs.available()) {
    gprs.print("AT+CPIN=");
    gprs.println(_pincode);
    Serial.println("Unlocked with pincode");
  }
}

Sim900::getCarrier()
{
  gprs.println();
}
Sim900::getSignal()
{
  gprs.println();
}
Sim900::getOperator()
{
  gprs.println();
}
Sim900::getEmei()
{
  gprs.println();
}
Sim900::call()
{
  gprs.println();
}
Sim900::resCall()
{
  gprs.println();
}
Sim900::readSms()
{
  gprs.println();
}
Sim900::resSms()
{
  gprs.println();
}
Sim900::sendSms()
{
  gprs.println();
}
Sim900::~Sim900()
{
  gprs.end();
}
