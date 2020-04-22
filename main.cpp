#include <iostream>
#include "steamboat.h"
#include "passenger_car.h"
#include "transport.h"
#include "car.h"
#include "bus.h"
#include "airplane.h"

using namespace std;

int main()
{

Bus b;
Airplane p1(15,1000, "Sarator_airlane", 200);
b.print();
p1.print();
Airplane p2(p1);
p2.print();
p2.setModel("SSTU_fly");
p2.print();



return 0;
}
