//#pragma once
#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include <string>
#include <map>
using namespace std;
class Person
{
public:
    void ChangeFirstName(int year, const string first_name);
    void ChangeLastName(int year, const string last_name);
    void ChangeFatherNames(int year, const string father_name);
    void ChangeCountryOfResidence(int year, const string country_of_residence1);
    void ChangeWork(int year, const string work);
    string GetFullName(int year);
    
private:
    map<int, string> first_names;
    map<int, string> last_names;
    map<int, string> father_names;
    map<int, string> country_of_residence;
    map<int, string> works;
    int year;
};
#endif
