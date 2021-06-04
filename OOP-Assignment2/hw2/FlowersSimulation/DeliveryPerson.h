#pragma once
#include "Person.h"
#include "FlowersBouquet.h"
using namespace std;

class DeliveryPerson : public Person
{
public:
	DeliveryPerson(string name);
	void deliver(Person* p, FlowersBouquet* fb);
};

