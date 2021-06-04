#pragma once
#include "FlowersBouquet.h"
#include "Person.h"
using namespace std;

class FlowerArranger : public Person
{
public:
	FlowerArranger(string name);
	void arrangeFlowers(FlowersBouquet* fb);
};

