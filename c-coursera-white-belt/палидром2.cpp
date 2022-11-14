#include <iostream>
#include <string>

bool IsPalindrome(std::string word)
{
    std::string palidromword;
    bool check = false;
    for (int i = word.size() - 1; i >= 0; i--)
    {
        palidromword += word[i];
    }
    if (word == palidromword)
        check = true;
    return check;
}