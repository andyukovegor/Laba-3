#include "steamboat.h"
#include <iostream>
using namespace std;

Steamboat::Steamboat():Steamboat(0,0,"model",0){};

Steamboat::Steamboat(int capacity, int speed, char *model, int displacement)
{
    if (capacity>=0){this->capacity = capacity;}
    if (speed>=0){this->speed = speed;}
    delete[] this->model;
    int len = strlen(model)+1;
    this ->model = new char [len];
    strcpy(this->model, model);
    if (displacement>=0){this->displacement = displacement;}
}

Steamboat::~Steamboat()
{
    delete [] model;
}

Steamboat::Steamboat(Steamboat &s):Steamboat(s.capacity,s.speed,s.model,s.displacement){}

void Steamboat:: print()
{
    std::cout<<"capacity - "<< capacity <<", ";
    std::cout<<"speed - "<< speed <<", ";
    std::cout<<"model - "<< model <<",";
    std::cout<<"displacement - "<< displacement <<"\n ";
}



bool Steamboat::setDisplacement(int displacement)
{
if(displacement >=0)
{
this->displacement = displacement;
return true;
}
return false;
}

void Steamboat::setModel(const char* model)
{
delete [] this ->model;
int len = strlen(model);
this ->model = new char[len];
strcpy (this ->model, model);
}


int Steamboat::getDisplacement()
{
return displacement;
}

char* Steamboat::getModel(char* model)
{
strcpy(model, this->model);
return model;
}
