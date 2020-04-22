#ifndef BUS_H_INCLUDED
#define BUS_H_INCLUDED
#include<cstring>
#include <iostream>
#include <math.h>
#include "car.h"

class Bus : public Car
 {
  public:
    Bus();
    Bus(int capacity, int speed, char *model);
    ~Bus();
    Bus(Bus &b);
    void print();
 };

#endif // BUS_H_INCLUDED
