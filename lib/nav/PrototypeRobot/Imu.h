#ifndef Imu_h
#define Imu_h
#include "Arduino.h"
#include <Wire.h>
#include <Adafruit_Sensor.h>
#include <Adafruit_BNO055.h>
#include <utility/imumaths.h>
#define BNO055_SAMPLERATE_DELAY_MS (100)
Adafruit_BNO055 bno = Adafruit_BNO055(55);


class Imu
{
  public:
    Imu();
    float getHeading();
    float getRoll();
    float getPitch();
    void getInfo();
    

 private:
  

};

#endif
