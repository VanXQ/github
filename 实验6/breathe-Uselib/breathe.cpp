#include <Arduino.h>
#include "breathe.h"
breathe::breathe(intpin){
    pinMode(pin, OUTPUT);
    pinNumber= pin;
}
void breathe::breathe(bool value){
    if(value == true){
        digitalWrite(pinNumber,HIGH);
        delay(1000);
        digitalWrite(pinNumber,LOW);
        delay(1000);
    }
    else
        {digitalWrite(pinNumber,LOW);
    }}
void breathe::breathe(bool value, intbreatheLength){
    if(value == true){
        digitalWrite(pinNumber,HIGH);delay(breatheLength);
        digitalWrite(pinNumber,LOW);delay(breatheLength);}
    else{digitalWrite(pinNumber,LOW);}}
void breathe::breathe(bool value, intbreatheLength, intbreatheLoops)
{if(value == true){
    for(inti=0;i<breatheLoops;i++)
    {digitalWrite(pinNumber,HIGH);
    delay(breatheLength);
    digitalWrite(pinNumber,LOW);
    delay(breatheLength);}}
    else{digitalWrite(pinNumber,LOW);}}


