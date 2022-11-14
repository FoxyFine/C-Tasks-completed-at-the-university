#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector <string> PalindromeFilter(vector<string> words, int minLength)
{
    vector <string> palidromvec;
    string palidromword;
    for (auto z : words)
    {
        if (z.size() < minLength)
        {
            continue;
        }
        for (int i = z.size() - 1; i >= 0; i--)
        {
            palidromword += z[i];
        }

        if (z == palidromword)
        {
            palidromvec.push_back(z);
        }
        palidromword = "";

    }
    return (palidromvec);
}

