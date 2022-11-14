/*Предусмотрите в нем минимум 3 метода и 5 полей.+
 
Сделайте инкапсуляцию, предусмотрите возможную защиту от неправильного ввода данных.+
 
Класс разбейте на 2 файла: заголовочный и файл исходного кода.+
 
Предусмотрите пространство имен.
 
Продемонстрируйте создание класса статически и динамически и использование его методов.
 
Продемонстрируйте создание и использование методов нескольких объектов класса(статически или динамически, на выбор).*/
#include "Person.h"
#include <iostream>
using namespace std;
#include <map>
#include <string>
int main()
{
    Person person;
 
    person.ChangeFirstName(1965, "Polina");
    person.ChangeFatherNames(1965, "Dmitrievna");
    person.ChangeCountryOfResidence(1967, "Mexico");
    person.ChangeWork(1967, "Dvornik na zavode");
    for (int year : {1900, 1965, 1990})
    {
        cout << person.GetFullName(year) << endl;
    }
 
    person.ChangeFirstName(1970, "Appolinaria");
    person.ChangeCountryOfResidence(1970, "Latvia");
    person.ChangeFatherNames(1970, "Sergeevna");
    for (int year : {1969, 1970}) {
        cout << person.GetFullName(year) << endl;
    }
 
    person.ChangeLastName(1968, "Volkova");
    person.ChangeWork(1969, "Cosmonavt");
    for (int year : {1969, 1970}) {
        cout << person.GetFullName(year) << endl;
    }
    return 0;
}
