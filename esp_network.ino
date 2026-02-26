#include "Config.h"
#include "WIFI.h"

void setup() {
  Serial.begin(115200);
  init_WIFI(WIFI_START_MODE_AP);
}

// the loop function runs over and over again forever
void loop() {
  delay(500);
  Serial.print("Our id is:");
  Serial.println(id());
}
