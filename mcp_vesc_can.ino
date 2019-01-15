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
  Serial.begin(115200);
}


void loop()
{
  comm_can_set_current(0x00, 2.0);

  //Read CAN status
  vesc_can_read();
  Serial.println(comm_can_get_status_msg_id(0)->rpm);
  delay(100);
}
