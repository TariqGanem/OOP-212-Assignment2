#pragma once
#include "Wholesaler.h"
#include "FlowerArranger.h"
#include "DeliveryPerson.h"

class Florist : public Person
{
private:
	Wholesaler* wholesaler;
	FlowerArranger* flowerArranger;
	DeliveryPerson* deliveryPerson;
public:
	Florist(string name, Wholesaler* wholesaler, FlowerArranger* flowerArranger, DeliveryPerson* deliveryPerson);
	void acceptOrder(Person* p, vector<string> arr);
};

