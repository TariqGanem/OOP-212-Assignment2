#include "FlowerArranger.h"
using namespace std;

FlowerArranger::FlowerArranger(string name) : Person(name) {}

void FlowerArranger::arrangeFlowers(FlowersBouquet* fb)
{
	cout << "Flower Arranger " << getName() << " arranges flowers." << endl;
	fb->arrange();
}