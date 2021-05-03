#include <Arduino.h>
#include "io_setup.h"

int state1, lastState1;
int state2, lastState2;
int state3, lastState3;

enum button
{
  btn1 = 5,
  btn2 = 6,
  btn3 = 7
};

enum relay
{
  relay1 = A0,
  relay2 = A1,
  relay3 = A2
};

void btn_init();
void relay_init();
void btn1_control();
void btn2_control();
void btn3_control();

void setup()
{
  Serial.begin(115200);
  btn_init();
  relay_init();
}

void loop()
{

  btn1_control();
  btn2_control();
  btn3_control();
  
}

void btn1_control()
{
  state1 = digitalRead(btn1);
  if (state1 != lastState1 && !state1)
  {
    digitalWrite(relay1, !digitalRead(relay1));
  }
  lastState1 = state1;
}

void btn2_control()
{
  state2 = digitalRead(btn2);
  if (state2 != lastState2 && !state2)
  {
    digitalWrite(relay2, !digitalRead(relay2));
  }
  lastState2 = state2;
}

void btn3_control()
{
  state3 = digitalRead(btn3);
  if (state3 != lastState3 && !state3)
  {
    digitalWrite(relay3, !digitalRead(relay3));
  }
  lastState3 = state3;
}

void btn_init()
{
  pin_mode_input(btn1);
  pin_mode_input(btn2);
  pin_mode_input(btn3);
}
void relay_init()
{
  pin_mode_out(relay1);
  pin_mode_out(relay2);
  pin_mode_out(relay3);
}
