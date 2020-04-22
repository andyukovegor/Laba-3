#ifndef TRANSPORT_H_INCLUDED
#define TRANSPORT_H_INCLUDED
#include<cstring>
#include <iostream>
#include <math.h>
using namespace std;

class Transpor
{
  protected:
    int capacity;
    int speed;
  public:
    Transpor();
    Transpor(int capacity, int speed);
    Transpor(Transpor &v);
     ~Transpor();
     virtual void print() =0;

};


#endif // TRANSPORT_H_INCLUDED
