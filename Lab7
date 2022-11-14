/*Вариант-38. Адаменко Вероника
Дана последовательность натуральных чисел {aj}j=1...n (n<=10000).
Если в последовательности нет одинаковых чисел, упорядочить последовательность по невозрастанию суммы цифр числа.
*/
#include <iostream>
 
using namespace std;
void swap(int &x, int &y)
{
	int buf = x;
	x = y;
	y = buf;
}
int main()
{
	int a[10000];
	int s[10000];
	int k = 0;
	int n, sum = 0, su;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		int b = a[i];
		while (b > 0)
		{
			su = b % 10;
			sum += su;
			b /= 10;
		}
		s[i] = sum;
		sum = 0;
	}
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i] == a[j])
			{
				k = k + 1;
				break;
			}
		}
		if (k == 1)
		{
			for (int i = 0; i < n; i++)
			{
				cout << a[i] << " ";
			}
			return 0;
		}
	}
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (s[i] < s[j])
			{
				swap(a[i], a[j]);
				swap(s[i], s[j]);
			}
		}
	}
 
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
}
