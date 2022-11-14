/*Напишите программу, в которой продемонстрируйте использование потоков:
1.	Выполнение двух действий одновременно.
2.	Разбитие сложного расчета на несколько потоков с замером времени.
*/
#include <iostream>
#include <thread>
#include <ctime>
using namespace std;
void Count(int cn11, int cn22, int& count1, int& count2)
{
    while (cn11 > 0)
    {
        cn11 = cn11 / 10;
        count1++;
    }
    while (cn22 > 0)
    {
        cn22 = cn22 / 10;
        count2++;
    }
}
void Array(int c, int count1, int count2, long long int cn1, long long int cn2, int n1[], int n2[])
{
    for (int i = 0; i < count1; i++)
    {
        c = cn1 % 10;
        n1[i] = c;
        cn1 = cn1 / 10;
    }
    for (int i = 0; i < count2; i++)
    {
        c = cn2 % 10;
        n2[i] = c;
        cn2 = cn2 / 10;
    }
}
void Perevorot(int n1[], int maxcc)
{
    int maxccminus = maxcc;
    for (int i = 0; i < (maxcc / 2); i++)
    {
        int buf;
        buf = n1[i];
        n1[i] = n1[maxccminus - 1 - i];
        n1[maxccminus - 1 - i] = buf;
    }
}
int main()
{
    srand(time(0));
    long long int a, b;
    int count1 = 0, count2 = 0, minc, maxplus, plus = 0, maxc, maxcc, c, proverka, proverka1, null = 0, maxccn4 = 0;
    bool am = false, bm = false, minus = true;
    int n1[100], n2[100], n3[100], n4[100], n5[100];
    cin >> a;
    cin >> b;
    long long int cn1 = a;
    long long int cn2 = b;
    if ((cn1 > 0) && (cn2 > 0))
        minus = false;
    if (cn1 < 0)
    {
        cn1 = cn1 + (cn1 * (-2));
        am = true;
    }
    if (cn2 < 0)
    {
        cn2 = cn2 + (cn2 * (-2));
        bm = true;
    }
    if (bm && am)
        minus = false;
    thread count(Count, cn1, cn2, std::ref(count1), std::ref(count2));
    for (int i = 0; i < 100; i++)
    {
        n1[i] = 0;
        n2[i] = 0;
        n3[i] = 0;
        n4[i] = 0;
        n5[i] = 0;
    }
    count.join();
    thread arr(Array, c, count1, count2, cn1, cn2, n1, n2);
    if (count1 > count2)
    {
        maxc = count1;
        maxplus = count1;
        maxcc = count1;
        minc = count2;
    }
    else
    {
        maxc = count2;
        maxcc = count2;
        maxplus = count2;
        minc = count1;
    }
    arr.join();
    for (int i = 0; i < minc; i++)
    {
        for (int j = 0; j < maxc; j++)
        {
            n3[j] = n1[j] * n2[i] + n3[j];
            if (n3[j] >= 10)
            {
                if (n3[maxc - 1] > 10)
                    maxcc++;
                int m = n3[j];
                n3[j] = n3[j] % 10;
                m /= 10;
                m %= 10;
                n3[j + 1] = n3[j + 1] + m;
            }
        }
        Perevorot(n3, maxcc);
        int nullm;
        nullm = null;
        for (int i = 0; i < null; i++)
        {
            n3[maxcc + null] = 0;
            nullm--;
        }
        Perevorot(n3, maxcc + null);
        maxccn4 = maxcc + null;
        null++;
        for (int i = 0; i < maxccn4; i++)
        {
            n4[i] += n3[i];
            proverka = n4[i];
            if (n4[i] >= 10)
            {
                while (proverka > 0)
                {
                    proverka1 = proverka % 10;
                    proverka /= 10;
                }
                n4[i] = n4[i] % 10;
                n4[i + 1] = n4[i + 1] + proverka1;
            }
        }
        maxcc--;
        for (int i = 0; i < 100; i++)
        {
            n3[i] = 0;
        }
    }
    if (minus)
        cout << "-";
    Perevorot(n4, maxccn4);
    for (int i = 0; i < maxccn4; i++)
        cout << n4[i];
    cout << endl;
    cout << " search_time " << clock() / 1000.0 << endl;
    return 0;
}
