# Simple image capture, esp32, seeed xiao esp32s3
This is a simple demo of image capture using the esp32, seeed xiao esp32s3. 

It uses the `esp_camera`, `WebServer`, and `WiFi` to capture an image then serve it over http.


# fixed bizzare upload issue with additon of 
this iss was causing the serial monitor to connect but i could not upload
```
build_flags = 
	-D ARDUINO_USB_MODE=1
	-D ARDUINO_USB_CDC_ON_BOOT=1    
```