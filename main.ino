//project that automatically waters a plant
//also displays temperature, humidity and sunlight
//23-2-2019
//@mathew4STAR

#include <Servo.h>
#include <LiquidCrystal.h>
#include <dht.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

Servo servo;
dht DHT;

#define DHT11_PIN 7

int ldrpin=A0;
int sensor =8;
int val;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  lcd.begin(16, 2);
  
  pinMode(ldrpin,INPUT);
  pinMode(8,INPUT);
  servo.attach(9);
  
  
  

}

void loop() {
  // put your main code here, to run repeatedly:
  val = digitalRead(8);
  int chk = DHT.read11(DHT11_PIN);
  lcd.setCursor(0,1);
  lcd.print("T:");
  lcd.print(DHT.temperature);
  lcd.setCursor(5,1);
  lcd.print("H:");
  lcd.print(DHT.humidity);
  
  if (val == HIGH)
  {
    servo.write(180);
    
    
    
    
  }
  else
  {
    servo.write(0);
  }
  delay(400);
  int ldrStatus = analogRead(ldrpin);
  if (ldrStatus >= 100) {
    
    lcd.setCursor(0,0);
    lcd.print("enough sunlight");
    
  }
  
  else {
    
    lcd.setCursor(0,0);
    lcd.print("move position");
    
  }
  if (DHT.temperature >= 26 && (DHT.humidity >= 49) )  {
        
  
    lcd.setCursor(12,1);
    lcd.print("W:g");
    delay(5000);
    
  }
  
  else {
    
  }
  
  if (DHT.temperature <= 26 && (DHT.humidity >= 49) )  {

    lcd.setCursor(12,1);
    lcd.print("W:ok");
    delay(5000);
  }
  
  else {
  }
  if (DHT.temperature >= 26 && (DHT.humidity <= 49) )  {

    lcd.setCursor(12,1);
    lcd.print("W:ok");
    delay(5000);
  }
  
  else {
    
  }
  if (DHT.temperature <= 26 && (DHT.temperature <= 49) ) {

     lcd.setCursor(12,1);
     lcd.print("W:b");
     delay(5000);
  } 
  
  else {
    
  }
  }
