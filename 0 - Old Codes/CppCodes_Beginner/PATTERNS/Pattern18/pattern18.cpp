#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
    cout << "How many columns : ";
    int n;
    cin >> n;

    Sleep(2000);

    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if ((i + j) % 4 == 0)
            {
                cout << "* ";
            }
            else if (i == 2 && j % 4 == 0)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
        Sleep(500);
    }
    system("PAUSE");
}