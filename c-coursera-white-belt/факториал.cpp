#include <iostream>
using namespace std;
int Factorial(int a)
{
    int factorial = 1;
    if (a < 0)
        return 1;
    if (a > 0)
        factorial = a * Factorial(a - 1);
    return factorial;
}