#include "Arduino.h"
#include "Imu.h"

Adafruit_BNO055 bno = Adafruit_BNO055(55);

Imu::Imu()
{
  /* Use external crystal for better accuracy */
  bno.setExtCrystalUse(true);
}

float Imu::getHeading()
{
  /* Get a new sensor event */
  sensors_event_t event;
  bno.getEvent(&event);
  Serial.print(F("Orientation: "));
  Serial.print((float)event.orientation.x);
  delay(BNO055_SAMPLERATE_DELAY_MS);
}

float Imu::getRoll()
{
  sensors_event_t event;
  bno.getEvent(&event);
  Serial.print(F("Orientation: "));
  Serial.print((float)event.orientation.z);
  delay(BNO055_SAMPLERATE_DELAY_MS);

}

float Imu::getPitch()
{
  sensors_event_t event;
  bno.getEvent(&event);
  Serial.print(F("Orientation: "));
  Serial.print((float)event.orientation.y);
  delay(BNO055_SAMPLERATE_DELAY_MS);
}

void Imu::getInfo()
{
  getHeading();
  getRoll();
  getPitch();
}
