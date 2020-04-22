#include "transport.h"
#include <iostream>
using namespace std;
Transpor::Transpor():Transpor(0,0){}

Transpor::Transpor(int capacity, int speed)
{
   if (capacity>0){this->capacity = capacity;}
   if (speed>0){this->speed = speed;}
}

Transpor::Transpor(Transpor &v):Transpor(v.capacity,v.speed){}
Transpor::~Transpor(){}
