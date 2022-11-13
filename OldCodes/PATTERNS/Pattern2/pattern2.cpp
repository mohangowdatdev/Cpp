#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
    int r, c, i, j;
    cout << "Row : ";
    cin >> r;
    cout << "Column : ";
    cin >> c;
    Sleep(2000);

    for (i = 1; i <= r; i++)
    {
        for (j = 1; j <= c; j++)
        {
            if (i == 1 || i == r || j == 1 || j == c)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
        Sleep(1000);
    }
    system("PAUSE");
}
