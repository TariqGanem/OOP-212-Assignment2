#include "FlowersBouquet.h"

FlowersBouquet::FlowersBouquet(vector<string> bouquet, bool is_arranged)
{
	this->bouquet = bouquet;
	this->is_arranged = is_arranged;
}

void FlowersBouquet::arrange()
{
	is_arranged = true;
}

string FlowersBouquet::toString()
{
	if (bouquet.empty())
		return "";
	string str = bouquet[0];
	for (int i = 1; i < bouquet.size(); i++)
		str = str + ", " + bouquet[i];
	return str.append(".");
}