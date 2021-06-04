#include<iostream>
#include "Person.h"
#include "Wholesaler.h"
#include "Florist.h"
using namespace std;

int main()
{
	Person* chris = new Person("Chris");
	Person* robin = new Person("Robin");
	FlowerArranger* arranger = new FlowerArranger("Flora");
	Gardener* gardener = new Gardener("Garett");
	Grower* grower = new Grower("Gray", gardener);
	Wholesaler* wholesaler = new Wholesaler("Watson", grower);
	DeliveryPerson* deliveryPerson = new DeliveryPerson("Dylan");
	Florist* florist = new Florist("Fred", wholesaler, arranger, deliveryPerson);
	vector<string> flowers;
	flowers.push_back("Roses");
	flowers.push_back("Violets");
	flowers.push_back("Gladiolus");
	chris->orderFlowers(florist, robin, flowers);
	delete chris;
	delete robin;
	delete arranger;
	delete gardener;
	delete grower;
	delete wholesaler;
	delete deliveryPerson;
	delete florist;
	return 0;
}