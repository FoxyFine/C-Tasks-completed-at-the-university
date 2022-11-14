#include <iostream>
#include <vector>
using namespace std;

void MoveStrings(vector<string>& source, vector <string>& destination)
{
	for (auto z : source)
		destination.push_back(z);
	source.clear();
}