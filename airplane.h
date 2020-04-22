#ifndef AIRPLANE_H_INCLUDED
#define AIRPLANE_H_INCLUDED
#include<cstring>
#include <iostream>
#include <math.h>
#include "transport.h"


 class Airplane : public Transpor
 {
   protected:
      int flight_hours;
      char *model;
   public:
      Airplane();
      Airplane(int capacity, int speed, char *model, int flight_hours);
      ~Airplane();
      Airplane(Airplane &pl);
      void print();

      void setModel(const char* model);
      bool setFlight_hours(int flight_hours);

      char* getModel(char* model);
      int getFlight_hours();
 };



#endif // AIRPLANE_H_INCLUDED
