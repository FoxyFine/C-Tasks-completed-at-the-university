/* Адаменко Вероника. Вариант-28. Дана целочисленная матрица {Aij}i=1,...,n;j=1,...,m (n,m<=20).    Найти сумму произведений элементов столбцов. */
#include <iostream>
using namespace std;
 
int main()
{
	int proiz = 1, sum = 0, k, p;
	int a[2000][20];
	cout << "Enter the number of rows and columns" << endl;
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
			cout << "Enter a value of " << i << " row " << j << " column" << endl;
			cin >> a[i][j];
		}
	}
	for (int i = 0; i < p; i++)
	{
		for (int j = 0; j < k; j++)
		{
			proiz *= a[j][i];
		}
		sum += proiz;
		proiz = 1;
	}
	cout << sum;
	return 0;
}
