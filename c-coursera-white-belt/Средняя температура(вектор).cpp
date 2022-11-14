#include <iostream>
#include <vector>
using namespace std;

int MiddleNum(const vector <int>& mnum)
{
    int arithmetic_mean = 0;
    for (auto z : mnum)
    {
        arithmetic_mean += z;
    }
    arithmetic_mean /= mnum.size();
    return arithmetic_mean;
}
int main()
{
    int n, num, k = 0, arithmetic;
    cin >> n;
    vector <int> temp;
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        temp.push_back(num);
    }
    arithmetic = MiddleNum(temp);
    vector <int> day;
    for (int i = 0; i < temp.size(); i++)
    {
        if (temp[i] > arithmetic)
            day.push_back(i);
    }
    cout << day.size() << endl;
    for (auto z : day)
        cout << z << " ";
}