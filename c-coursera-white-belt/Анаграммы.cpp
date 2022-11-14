#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;
string BuildCharCounters(const string& fw, const string& sw)
{
    map <char, int> CharCountersFirst;
    map <char, int> CharCountersSecond;
        for (auto i : fw)
            ++CharCountersFirst[i];
        for (auto i : sw)
            ++CharCountersSecond[i];
    if (CharCountersFirst == CharCountersSecond)
        return "YES";
    else
        return "NO";
}

int main()
{
    int N;
    string first_word, two_word;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> first_word >> two_word;
        cout << BuildCharCounters(first_word, two_word) << endl;
    }
}