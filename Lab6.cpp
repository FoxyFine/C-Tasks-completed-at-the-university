/*Вариант - 11. Адаменко Вероника
Ввести последовательность натуральных чисел{ Aj }j = 1...n(n <= 1000).
Упорядочить последовательность по неубыванию произведения цифр числа,
числа с одинаковыми произведениями цифр дополнительно упорядочить по неубыванию наибольшей цифры числа,
числа с одинаковыми произведениями цифр и одинаковыми наибольшими цифрами дополнительно упорядочить по неубыванию самого числа.*/
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
	int n, max = INT_MIN, proiz = 1, pr;
	int a[1000];
	int m[1000];
	int p[1000];
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i < n; i++)
	{
		int B = a[i];
		while (B > 0)
		{
			pr = B % 10;
			if (pr > max)
			{
				m[i] = pr;
				max = pr;
			}
			proiz *= pr;
			B = B / 10;
		}
		p[i] = proiz;
		max = INT_MIN;
		proiz = 1;
	}
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (p[i] > p[j])
			{
				swap(a[i], a[j]);
				swap(p[i], p[j]);
				swap(m[i], m[j]);
				continue;
			}
			if (p[i] == p[j])
			{
				if (m[i] == m[j])
				{
					if (a[i] > a[j])
					{
						swap(p[i], p[j]);
						swap(a[i], a[j]);
						swap(m[i], m[j]);
					}
					continue;
				}
				if (m[i] > m[j])
				{
					swap(p[i], p[j]);
					swap(a[i], a[j]);
					swap(m[i], m[j]);
				}
			}
		}
	}
	cout << "Sequence output " << endl;
	for (int i = 0; i < n; i++)
		cout << a[i] << endl;
}
