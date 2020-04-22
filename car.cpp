#include "car.h"
#include <iostream>
using namespace std;

Car::Car():Car(0,0,"model"){};

Car::Car(int capacity, int speed, char *model)
{
    if (capacity>0){this->capacity = capacity;}
    if (speed>0){this->speed = speed;}
    delete[] this->model;
    int len = strlen(model)+1;
    this ->model = new char [len];
    strcpy(this->model, model);
}

Car::~Car()
{
    delete [] model;
}

Car::Car(Car &c):Car(c.capacity,c.speed,c.model){}

void Car::setModel(const char* model)
{
delete [] this ->model;
int len = strlen(model);
this ->model = new char[len];
strcpy (this ->model, model);
}

bool Car::setSpeed(int speed)
{
if(speed >=0 && speed<1000)
{
this->speed = speed;
return true;
}
return false;
}


bool Car::setCapacity(int capacity)
{
if(capacity >=0)
{
this->capacity = capacity;
return true;
}
return false;
}

int Car::getSpeed()
{
return speed;

}

int Car::getCapacity()
{
return capacity;

}

char* Car::getModel(char* model)
{
strcpy(model, this->model);
return model;
}
