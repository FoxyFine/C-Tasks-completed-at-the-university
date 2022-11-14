#include <iostream>
using namespace std;

int main()
{
    int secinday, hour1, hour2, min1, min2, sec1, sec2;
    cin >> secinday;
    sec1 = secinday % 60;
    sec2 = sec1 % 10;
    sec1 /= 10;
    secinday /= 60;
    min1 = secinday % 60;
    min2 = min1 % 10;
    min1 /= 10;
    secinday /= 60;
    hour1 = secinday % 60;
    hour2 = hour1 % 10;
    hour1 /= 10;
        cout << hour1 << hour2 << ":" << min1 << min2 << ":" << sec1 << sec2;
}
