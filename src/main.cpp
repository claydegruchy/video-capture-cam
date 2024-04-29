
#include "secrets.h"
#include <Arduino.h>

#include <eloquent_esp32cam.h>
#include <eloquent_esp32cam/viz/mjpeg.h>

using namespace eloq;
using namespace eloq::viz;

//
// // ESP32 static IP
// IPAddress staticIP(192, 168, 1, 25);
// // IP Address of your network gateway (router)
// IPAddress gateway(192, 168, 1, 1);
// // Subnet mask
// IPAddress subnet(255, 255, 255, 0);

void setup() {
  Serial.begin(115200);
  Serial.println("___MJPEG STREAM SERVER___");

  // camera settings
  // replace with your own model!

  Serial.println("camera.pinout.xiao();");
  camera.pinout.xiao();
  Serial.println("camera.pinout.aithinker();");
  camera.pinout.aithinker();
  Serial.println("camera.brownout.disable();");
  camera.brownout.disable();
  Serial.println("camera.resolution.qvga();");
  camera.resolution.qvga();
  Serial.println("camera.quality.low();");
  camera.quality.low();

  // // init camera
  while (!camera.begin().isOk())
    Serial.println(camera.exception.toString());
  Serial.println("Camera OK");

  // // connect to WiFi
  // while (!wifi.connect().isOk())
  //   Serial.println(wifi.exception.toString());
  // Serial.println("WiFi OK");

  // // start mjpeg http server
  // while (!mjpeg.begin().isOk())
  //   Serial.println(mjpeg.exception.toString());
  // Serial.println("MjpegStream OK");

  // Serial.println(mjpeg.address());
}

int i = 0;

void loop() {
  if (i % 12345 == 0) {
    Serial.print("loop: ");
    Serial.println(i);
  }

  i++;
}
