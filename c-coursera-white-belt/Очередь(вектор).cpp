#include <iostream>
#include <string>
#include <vector>

using namespace std;

/* void queue(string com, int num, vector <string>& queue_human)
{
    if (com == "WORRY")
    {
        queue_human[num] = "WORRY";
    }
    else
        if (com == "QUIET")
        {
            queue_human[num] = "QUIET";
        }
        else
            if (com == "COME")
            {
                if (num > 0)
                {
                    for (int i = 0; i < num; i++)
                        queue_human.push_back("QUIET");
                }
                else
                {
                    queue_human.resize((queue_human.size() + num));
                }
            }
            else
                if (com == "WORRY_COUNT")
                {
                    int k = 0;
                    for (int i = 0; i < queue_human.size(); i++)
                    {
                        if (queue_human[i] == "WORRY")
                        {
                            k++;
                        }
                    }
                    cout << k << endl;
                }
}*/

int main()
{
    int Q, num = 0;
    vector <string> queue_human;
    string command;
    cin >> Q;
    for (int i = 0; i < Q; i++)
    {
        cin >> command;
        if ((command == "WORRY") || (command == "COME") || (command == "QUIET"))
            cin >> num;
        if (command == "WORRY")
        {
            queue_human[num] = "WORRY";
        }
        else
            if (command == "QUIET")
            {
                queue_human[num] = "QUIET";
            }
            else
                if (command == "COME")
                {
                    if (num > 0)
                    {
                        for (int i = 0; i < num; i++)
                            queue_human.push_back("QUIET");
                    }
                    else
                    {
                        queue_human.resize((queue_human.size() + num));
                    }
                }
                else
                    if (command == "WORRY_COUNT")
                    {
                        int k = 0;
                        for (int i = 0; i < queue_human.size(); i++)
                        {
                            if (queue_human[i] == "WORRY")
                            {
                                k++;
                            }
                        }
                        cout << k << endl;
                    }
    }
}