#include "EEPROM.h"

#define EEPROM_SIZE 16
RTC_DATA_ATTR unsigned int counter=0; 


void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
counter++;
Serial.print(counter);
esp_sleep_enable_timer_wakeup(3000000); // go to sleep for 10s
esp_deep_sleep_start(); // Enter Deep Sleep mode
}

void loop() {
  // put your main code here, to run repeatedly:

}
