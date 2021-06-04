#include "Person.h"
#include "Florist.h"

Person::Person(string name) : name(name) {}

void Person::orderFlowers(Florist* f, Person* p, vector<string> arr)
{
	cout << name << " orders flowers to " << p->name << " from Florist " << f->getName() << ": ";
	cout << getFlowersPhrase(arr) << endl;
	f->acceptOrder(p, arr);
}

void Person::acceptFlowers(FlowersBouquet* fb)
{
	cout << name << " accepts the flowers: " << fb->toString() << endl;
	delete fb;
}

string Person::getName()
{
	return name;
}

string Person::getFlowersPhrase(vector<string> arr)
{
	string str = arr.empty() ? "" : arr[0];
	for (int i = 1; i < arr.size(); i++)
		str = str + ", " + arr[i];
	str += ".";
	return str;
}