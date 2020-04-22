#ifndef STEAMBOAT_H_INCLUDED
#define STEAMBOAT_H_INCLUDED
#include<cstring>
#include <iostream>
#include <math.h>
#include "transport.h"

class Steamboat : public Transpor
 {
  protected:
      int displacement;
      char *model;
  public:
      Steamboat();
      Steamboat(int capacity, int speed, char *model, int displacement);
      ~Steamboat();
      Steamboat(Steamboat &s);
      void print();

      bool setDisplacement(int displacement);
      void setModel(const char* model);

      int getDisplacement();
      char* getModel(char* model);

 };


#endif // STEAMBOAT_H_INCLUDED
