#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
    int n, i, j;
    cout << "Number : ";
    cin >> n;
    Sleep(2000);

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        int space = 2 * n - 2 * i;
        for (j = 1; j <= space; j++)
        {
            cout << "  ";
        }
        for (j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
        Sleep(2000);
    }
    for (i = n; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        int space = 2 * n - 2 * i;
        for (j = 1; j <= space; j++)
        {
            cout << "  ";
        }
        for (j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
        Sleep(2000);
    }
    system("PAUSE");
}