#include "DeliveryPerson.h"
#include <iostream>
using namespace std;

DeliveryPerson::DeliveryPerson(string name) : Person(name) {}

void DeliveryPerson::deliver(Person* p, FlowersBouquet* fb)
{
	cout << "Delivery Person " << getName() << " delivers flowers to " << p->getName() << "." << endl;
	p->acceptFlowers(fb);
}