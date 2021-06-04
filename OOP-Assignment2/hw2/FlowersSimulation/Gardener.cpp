#include "Gardener.h"
using namespace std;

Gardener::Gardener(string name) : Person(name) {}

FlowersBouquet* Gardener::prepareBouquet(vector<string> arr)
{
	cout << "Gardener " << getName() << " prepares flowers." << endl;
	return new FlowersBouquet(arr, false);
}
