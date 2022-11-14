/*Вариант - 9. Адаменко Вероника
Дана целочисленная матрица{ Aij }i = 1..n, j = 1..m(n, m <= 100).
Найти строку, в которой меньше всего четных чисел, и заменить все элементы этой строки их квадратами.*/
#include <iostream>
using namespace std;
 
int main()
{
	int k, p, c = 0, min = INT_MAX, s;
	int a[100][100];
	cin >> k >> p;
	if (k <= 0 || p <= 0)
	{
		cout << "Empty matrix or range check error" << endl;
		return 0;
	}
	for (int i = 0; i < k; i++)
	{
		for (int j = 0; j < p; j++)
		{
			cin >> a[i][j];
			if (a[i][j] % 2 == 0)
			{
				c += 1;
			}
		}
		if (min > c)
		{
			min = c;
			s = i;
		}
		c = 0;
	}
	int i = s;
	for (int j = 0; j < p; j++)
	{
		a[i][j] *= a[i][j];
	}
	for (int i = 0; i < k; i++)
	{
		for (int j = 0; j < p; j++)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}
