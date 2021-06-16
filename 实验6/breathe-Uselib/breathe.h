#ifndef Breathe_h
#define Breathe_h

#include <Arudino.h>

#define ON true
#define OFF false

class Breathe{
public:
Breathe(byte p,bool state=LOW);
~Breathe();
Byte getPin()
void on();
void off();
boolean getState();
private:
	Byte pin;
};
#endif