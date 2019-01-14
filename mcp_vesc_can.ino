/* BLDC dyno
 * Controls two VESC's via CAN bus
 * 11" HMI
 */

//Includes
#include "vesc_can.h"


//Constants
const int spiPin = 10;
const int ledPin = 3;
const int intPin = 2;

void setup()
{
  //Setup
  vesc_can_begin();
}


void loop()
{
  //Loop
  for (int i = 0; i < 10; i++)
  {
    comm_can_set_rpm(0x00, 2000.0);
    delay(200);
  }
  for (int i = 0; i < 10; i++)
  {
    comm_can_set_rpm(0x00, 4000.0);
    delay(200);
  }
}
