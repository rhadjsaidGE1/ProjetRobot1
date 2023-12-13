//  Copyright (c) 2019 Antoine Tran Tan
//

#ifndef NBOARD_H
#define NBOARD_H

#include "mbed.h"
#include "IHM.h"

extern IHM ihm;
extern DigitalOut Led0;
extern DigitalOut Led1;
extern DigitalOut Led2;
extern DigitalOut Led3;
extern BusOut Bus8Led;
extern DigitalIn BP0;
extern DigitalIn BP1;
extern DigitalIn BP2;
extern DigitalIn BP3;
extern BusOut BusSelectMux;
extern AnalogIn AnaIn;

#define Ana0 0
#define Ana1 1
#define Ana2 2
#define Ana3 3
#define Ana4 4
#define Ana5 5
#define AIn 6
#define Vpot 7

#endif
