#ifndef PASSENGER_CAR_H_INCLUDED
#define PASSENGER_CAR_H_INCLUDED
#include<cstring>
#include <iostream>
#include <math.h>
#include "car.h"

class Passenger_car : public Car
 {
  public:
      Passenger_car();
      Passenger_car(int capacity, int speed, char *model);
      ~Passenger_car();
      Passenger_car(Passenger_car &pc);
      void print() ;
 };

#endif // PASSENGER_CAR_H_INCLUDED
