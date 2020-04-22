#ifndef CAR_H_INCLUDED
#define CAR_H_INCLUDED
#include<cstring>
#include <iostream>
#include <math.h>
#include "transport.h"

 class Car : public Transpor
 {
     protected:
        char *model;
     public:
        Car();
        Car(int capacity, int speed, char *model);
        ~Car();
        Car(Car &c);
        virtual void print() =0;

        void setModel(const char* model);
        bool setSpeed(int speed);
        bool setCapacity(int capacity);

        int getSpeed();
        int getCapacity();
        char* getModel(char* model);
 };

#endif // CAR_H_INCLUDED
