#include <iostream>
#include <vector>
using namespace std;

vector<int> Reversed(const vector<int>& v)
{
    vector<int> ReversedCopy;
    for (int i = v.size() - 1; i >= 0; i--)
    {
        ReversedCopy.push_back(v[i]);
    }
    return ReversedCopy;
}