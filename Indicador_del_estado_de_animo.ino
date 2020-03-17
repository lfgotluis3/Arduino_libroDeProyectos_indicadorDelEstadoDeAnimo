#include <Servo.h>
Servo MiServo;
int const PinPot = A0;
int ValorPot;
int Angulo;
void setup() 
  {
    MiServo.attach(9);
    Serial.begin(9600);  
  }

void loop() 
  {
    ValorPot = analogRead(PinPot);
    Serial.print("Posición del Potenciometro:");
    Serial.print(ValorPot);
    Angulo =map(ValorPot, 0, 1023, 0, 179);
    Serial.print("Angulo:");
    Serial.print(Angulo);
    MiServo.write(Angulo);
    delay(500);
  }
