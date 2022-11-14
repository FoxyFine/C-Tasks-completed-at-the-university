#include <iostream>
using namespace std;

int main()
{
    int line, column;
    cin >> line >> column;
    int** ptra = new int* [line];
    int** ptrb = new int* [column];


    for (int i = 0; i < line; i++) 
    {
        ptra[i] = new int[column];
    }
    for (int i = 0; i < column; i++)
    {
        ptrb[i] = new int[line];
    }

    
    for (int i = 0; i < line; i++) 
    {
        for (int j = 0; j < column; j++) 
        {
            cin >> ptra[i][j];
        }
    }


        for (int i = 0; i < line; i++)
        {
            for (int j = 0; j < column; j++)
            {
                ptrb[j][i] = ptra[i][j];
            }
        }


    for (int i = 0; i < column; i++)
    {
        for (int j = 0; j < line; j++)
        {
            if (j == (line - 1))
                cout << ptrb[i][j];
            else
                cout << ptrb[i][j] << " ";
        }
        cout << endl;
    }
}
