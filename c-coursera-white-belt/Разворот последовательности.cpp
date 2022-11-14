#include <iostream>
#include <vector>

using namespace std;
void Reverse(vector <int>& v){
    vector <int> v_reverse;
   /* for (int i = v.size() - 1; i >= 0; i--)
        v_reverse.push_back(v[i]);*/
    int size = v.size() - 1;
    for (int i = 0; i < (v.size() / 2); i++)
    {
        int buf = v[i];
        v[i] = v[size];
        v[size] = buf;
        size--;
    }
}