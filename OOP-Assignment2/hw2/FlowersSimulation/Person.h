#pragma once
#include "FlowersBouquet.h"
#include <string>
#include <vector>
#include <iostream>
class Florist;

class Person
{
private:
	string name;
public:
	Person(string name);
	void orderFlowers(Florist* f, Person* p, vector<string> arr);
	void acceptFlowers(FlowersBouquet* fb);
	string getName();
	string getFlowersPhrase(vector<string> arr);
};

