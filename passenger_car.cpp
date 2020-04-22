#include "passenger_car.h"
#include <iostream>
using namespace std;

Passenger_car::Passenger_car():Passenger_car(0,0,"model"){};

Passenger_car::Passenger_car(int capacity, int speed, char *model)
{
    if (capacity>=0){this->capacity = capacity;}
    if (speed>=0){this->speed = speed;}
    delete[] this->model;
    int len = strlen(model)+1;
    this ->model = new char [len];
    strcpy(this->model, model);
}

Passenger_car::~Passenger_car()
{
    delete [] model;
}

Passenger_car::Passenger_car(Passenger_car &pc):Passenger_car(pc.capacity,pc.speed,pc.model){}

void Passenger_car:: print()
{
    std::cout<<"capacity - "<< capacity <<", ";
    std::cout<<"speed - "<< speed <<", ";
    std::cout<<"model - "<< model <<"\n";
}
