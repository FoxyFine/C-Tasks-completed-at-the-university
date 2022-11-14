#include <iostream>
#include <string>
using namespace std;

int main()
{
    string word;
    cin >> word;
    int i = 0, k = 0;
    for (char z : word)
    {
        if (z == 'f')
            k++;
        if (k == 2)
        {
            cout << i;
            return 0;
        }
        i++;
    }
    if (k == 1)
        cout << -1;
    else
        if (k == 0)
            cout << -2;

}
