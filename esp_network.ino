#include "Config.h"
#include "WIFI.h"
#include "Server.h"

void setup() {
  pinMode(led, OUTPUT);
  Serial.begin(115200);
  init_WIFI(WIFI_START_MODE_AP);
  init_server();
}

// the loop function runs over and over again forever
void loop() {
  server.handleClient();
  //delay(500);
  //Serial.print("Our id is:");
  //Serial.println(id());
}
