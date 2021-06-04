#pragma once
#include <string>
#include <vector>
using namespace std;

class FlowersBouquet
{
private:
	vector<string> bouquet;
	bool is_arranged;
public:
	FlowersBouquet(vector<string> bouquet, bool is_arranged);
	string toString();
	void arrange();
};

