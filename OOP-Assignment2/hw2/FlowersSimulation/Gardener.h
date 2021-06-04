#pragma once
#include "FlowersBouquet.h"
#include "Person.h"
using namespace std;

class Gardener : public Person
{
public:
	Gardener(string name);
	FlowersBouquet* prepareBouquet(vector<string> arr);
};

