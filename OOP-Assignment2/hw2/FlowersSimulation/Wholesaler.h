#pragma once
#include "Grower.h"
using namespace std;

class Wholesaler : public Person
{
private:
	Grower* grower;
public:
	Wholesaler(string name, Grower* grower);
	FlowersBouquet* acceptOrder(vector<string> arr);
};

