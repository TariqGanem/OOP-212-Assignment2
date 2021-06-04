#include "Grower.h"
using namespace std;

Grower::Grower(string name, Gardener* gardener) : Person(name)
{
	this->gardener = gardener;
}

FlowersBouquet* Grower::prepareOrder(vector<string> arr)
{
	cout << "Grower " << getName() << " forwards the request to Gardener " << gardener->getName() << "." << endl;
	FlowersBouquet* fb = gardener->prepareBouquet(arr);
	cout << "Gardener " << gardener->getName() << " returns flowers to Grower " << getName() << "." << endl;
	return fb;
}