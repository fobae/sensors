/*
 * (c) Clement Trosa, the Domobee project
 * Date: jeudi 16 mars 2017, 12:51:42 (UTC+0100)
 * Description: The sim900 simplification library
 * Tested on Seedstudio v2 shield.
 * More information @ github.com/domobee/sensors
 */

#ifndef Sim900_h
#define Sim900_h

#include "Arduino.h"

class Sim900{
 public:
  Sim900(int pincode); // Constructor
  void getCarrier();
  void getSignal();
  void getOperator();
  void getEmei();

  void call();
  void resCall();

  void readSms();
  void resSms();
  void sendSms();

  void http();
  ~Sim900();
 private:
  int _pincode;
};

#endif
