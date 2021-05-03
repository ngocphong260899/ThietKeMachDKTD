#pragma once
#include <io_setup.h>
#include <Arduino.h>

void pin_mode_out(int pin)
{
    pinMode(pin,OUTPUT);
}
void pin_mode_input(int pin)
{
    pinMode(pin, INPUT_PULLUP);
}

void pin_high(int pin)
{
    digitalWrite(pin,HIGH);
}

void pin_low(int pin)
{
    digitalWrite(pin,LOW);
}
