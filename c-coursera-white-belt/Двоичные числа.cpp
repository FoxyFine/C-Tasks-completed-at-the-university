#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int a, b;
	vector <int> remains;
	cin >> a;
	do
	{
		b = a % 2;
		remains.push_back(b);
	} while ((a /= 2) > 0);
	for (size_t i = remains.size(); i > 0; i--)
	{
		cout << remains[i] << " ";
	}

}
