#include "Person.h"
#include <iostream>
#include <string>
#include <map>
using namespace std;
// если имя неизвестно, возвращает пустую строку
namespace FindName
{
    string FindNameByYear(const map<int, string> names, int year)
    {
        string name;  // изначально имя неизвестно
 
        // перебираем всю историю по возрастанию ключа словаря, то есть в хронологическом порядке
        for (const auto& item : names) {
            // если очередной год не больше данного, обновляем имя
            if (item.first <= year) {
                name = item.second;
            }
            else {
                // иначе пора остановиться, так как эта запись и все последующие относятся к будущему
                break;
            }
        }
 
        return name;
    }
}
    void Person::ChangeFirstName(int year, const string first_name)
    {
        first_names[year] = first_name;
    }
    void Person::ChangeLastName(int year, const string last_name)
    {
        last_names[year] = last_name;
    }
    void Person::ChangeFatherNames(int year, const string father_name)
    {
        father_names[year] = father_name;
    }
    void Person::ChangeCountryOfResidence(int year, const string country_of_residence1)
    {
        country_of_residence[year] = country_of_residence1;
    }
    void Person::ChangeWork(int year, const string work)
    {
        works[year] = work;
    }
    string Person::GetFullName(int year)
    {
        // получаем имя и фамилию по состоянию на год year
        const string first_name = FindName::FindNameByYear(first_names, year);
        const string last_name = FindName::FindNameByYear(last_names, year);
        const string father_name = FindName::FindNameByYear(father_names, year);
        const string country_of_residence1 = FindName::FindNameByYear(country_of_residence, year);
        const string work = FindName::FindNameByYear(works, year);
 
 
        // если и имя, и фамилия неизвестны
        if (!(work.empty()))
            cout << "Work - " << work << " " << endl;
        else
            cout << "Work - Unemloyed " << endl;
        if (!(country_of_residence1.empty()))
            cout << "Country of residence - " << country_of_residence1 << " " << endl;
        else
            cout << "Country of residence - Russia " << endl;
        if (first_name.empty() && last_name.empty())
        {
            if (father_name.empty())
            {
                return "Incognito";
            }
            else
            {
                return father_name + " with unknown first name and last name";
            }
        }
        if (father_name.empty() && last_name.empty())
        {
            if (first_name.empty())
            {
                return "Incognito";
            }
            else
            {
                return first_name + " with unknown father name and last name";
            }
        }
        if (first_name.empty() && father_name.empty())
        {
            if (last_name.empty())
            {
                return "Incognito";
            }
            else
                return last_name + " with unknown first name and fathername_ name";
            //неивестно только имя
        }
 
        else if ((first_name.empty()) && (!(last_name.empty())) && (!(father_name.empty())))
        {
            return last_name + " " + father_name + " with unknown first name";
 
            // если неизвестна только фамилия
        }
        else if ((last_name.empty()) && (!(first_name.empty())) && (!(father_name.empty())))
        {
            return first_name + " " + father_name + " with unknown last name";
 
            // если неизвестно отчество
        }
        else if ((father_name.empty()) && (!(first_name.empty())) && (!(last_name.empty())))
        {
            return first_name + " " + last_name + " with unknown father name";
 
            // если известны и имя, и фамилия отчество
        }
 
        else
        {
            return first_name + " " + last_name + " " + father_name;
        }
    }
