/* Адаменко Вероника Вариант-31. Дана последовательность целых чисел {Aj}. Hайти сумму чисел, не делящихся на 3 и на 5, наименьшее из таких чисел и номеp этого числа в последовательности.
 
 */
#include <iostream>
 
using namespace std;
 
int main()
{
	int k = -1, sum = 0, pos, razmer;
	int m = INT_MAX;
	cout << "Enter the number of elements" << endl;
	cin >> razmer;
	for (int i = 0; i < razmer; i++)
	{
		cout << "Enter " << i << " sequence number" << endl;
		cin >> pos;
		if ((pos % 3 != 0) && (pos % 5 != 0))
		{
			sum += pos;
			if (pos < m)
			{
				m = pos;
				k = i;
			}
 
		}
    }
	if ((k == -1) && (sum == 0))
	{
		cout << "No numbers that are not divided by 3 and by 5" << endl;
		return 0;
    }
	cout << "summa= " << sum << " Number minimum number= " << k << " Minimum number= " << m << endl;
	return 0;
}
