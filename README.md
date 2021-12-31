## Self-Gardening-Sytem
- A project that automatically waters a plant based on its soil moisture level. 
- It also displays the temperature, humidity and sunlight the plant is recieving.
- I made this project long back for fun but thought it would be good idea to put it up on github.

# How it works
- The project works with an Arduino UNO, a microcontroller as brain and some C++ code(availabe at *main.py*). The project also uses a soil moisture sensor, a temperature sensor, a humidity sensor and a photoresistor. 
- The projects uses the data from these sensors and turns a servo motor(you could easily alter the code to make it fit with anything else like a relay) to water the plant. It also displays some of the other data on a LCD screen.
- The data from the sensor is processed by the Arduino and the servos and lcd do the appropriate result.

# Instuctions
1. What you need
   1. An Arduino  
   2. A Soil moisture Sensor 
   3. A Humidity Sensor  ----
   4. A Temperature Sensor --I used a DH11 instead
   5. A Photoresistor
   6. A LCD screen
   7. Some resistors
2. Follow the circuit diagram (I have not added this yet but will do soon.)
3. Build a setup depending on your case. For me I had attached the servo to a plastic bottle with holes in its cap which turned and watered the plant.
4. Connect the Arudino to a computer.
5. Copy the code to the Arduino IDE (please install it if you don't have it)
6. Upload the code to the Arduino.
7. You may have to optimize the code and other things to fit your case. <br>
*I will try to make better documentation soon*

**THANK YOU**
