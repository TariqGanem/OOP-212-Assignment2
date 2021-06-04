#pragma once
#include "Gardener.h"
#include "FlowersBouquet.h"
using namespace std;

class Grower : public Person
{
private:
	Gardener* gardener;
public:
	Grower(string name, Gardener* gardener);
	FlowersBouquet* prepareOrder(vector<string> arr);
};

