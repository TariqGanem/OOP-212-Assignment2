#include "Florist.h"

Florist::Florist(string name, Wholesaler* wholesaler, FlowerArranger* flowerArranger, DeliveryPerson* deliveryPerson) : Person(name)
{
	this->wholesaler = wholesaler;
	this->flowerArranger = flowerArranger;
	this->deliveryPerson = deliveryPerson;
}

void Florist::acceptOrder(Person* p, vector<string> arr)
{
	cout << "Florist " << getName() << " forwards request to Wholesaler " << wholesaler->getName() << "." << endl;
	FlowersBouquet* fb = wholesaler->acceptOrder(arr);
	cout << "Wholesaler " << wholesaler->getName() << " returns flowers to Florist " << getName() << "." << endl;
	cout << "Florist " << getName() << " requests flowers arrangement from Flower Arranger " << flowerArranger->getName() << "." << endl;
	flowerArranger->arrangeFlowers(fb);
	cout << "Flower Arranger " << flowerArranger->getName() << " returns arranged flowers to Florist " << getName() << "." << endl;
	cout << "Florist " << getName() << " forwards flowers to Delivery Person " << deliveryPerson->getName() << "." << endl;
	deliveryPerson->deliver(p, fb);
}