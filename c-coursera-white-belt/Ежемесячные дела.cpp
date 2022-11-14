#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int Q, num, month = 1, day = 31;
    string command, word;
    vector <string> calendar(31);
    vector <string> new_calendar;
    cin >> Q;
    for (int j = 0; j < Q; j++)
    {
        cin >> command;
        if (command == "ADD")
        {
            cin >> num >> word;
            if (!(calendar[num-1].empty()))
            {
                calendar[num-1] += " ";
                calendar[num-1] += word;
            }
            else
                calendar[num-1] = word;
        }
        if (command == "DUMP")
        {
            cin >> num;
            if (calendar[num - 1].empty())
            {
                cout << "0" << endl;
            }
            else
            {
                int k = 1;
                for (auto z : calendar[num - 1])
                {
                    if (z == ' ')
                        k++;
                }
                cout << k << " " << calendar[num - 1] << endl;
            }
        }
        if (command == "NEXT")
        {
            month++;
            if (month > 12)
                month = 1;
            int oldday = day;
            if (month == 2)
                day = 28;
            else
                if ((month == 1) || (month == 3) || (month == 5) || (month == 7) || (month == 8) || (month == 10) || (month == 12))
                {
                    day = 31;
                }
                else
                    day = 30;
            new_calendar = calendar;
            calendar.resize(day);
            if (oldday > day)
            {
                for (int i = (oldday - day); i > 0; i--)
                {
                    if (!(new_calendar[oldday - i].empty()))
                    {
                        if (!(calendar[day-1].empty()))
                            calendar[day - 1] += " ";
                        calendar[day - 1] += new_calendar[oldday - i];
                    }
                }
            }
            else
                if (oldday < day)
                {
                    for (int i = 0; i < oldday; i++)
                        calendar[i] = new_calendar[i];
                }
            new_calendar.clear();
        }
    }
}