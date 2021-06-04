#include "Wholesaler.h"
using namespace std;

Wholesaler::Wholesaler(string name, Grower* grower) : Person(name)
{
	this->grower = grower;
}

FlowersBouquet* Wholesaler::acceptOrder(vector<string> arr)
{
	cout << "Wholesaler " << getName() << " forwards the request to Grower " << grower->getName() << "." << endl;
	FlowersBouquet* fb = grower->prepareOrder(arr);
	cout << "Grower " << grower->getName() << " returns flowers to Wholesaler " << getName() << "." << endl;
	return fb;
}