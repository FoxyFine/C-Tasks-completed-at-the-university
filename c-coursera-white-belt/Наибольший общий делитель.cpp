﻿#include <iostream>
using namespace std;

int main()

{
	int a, b, num;
	cin >> a >> b;
	while ((a>0)&&(b>0))
	{
		if (a > b)
			a = a % b;
		else
			b = b % a;
	}
	cout << a + b;
}