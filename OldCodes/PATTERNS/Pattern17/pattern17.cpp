#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
    int n, i, j;
    cout << "Number : ";
    cin >> n;
    Sleep(2000);
    int space, star = 1;
    for (i = 1; i <= n; i++)
    {
        space = n - i;
        for (j = 1; j <= space; j++)
        {
            cout << "  ";
        }
        star = (2 * i) - 1;
        for (j = 1; j <= star; j++)
        {
            cout << "* ";
        }
        cout << endl;
        Sleep(500);
    }
    for (i = n; i >= 1; i--)
    {
        space = n - i;
        for (j = 1; j <= space; j++)
        {
            cout << "  ";
        }
        star = (2 * i) - 1;
        for (j = 1; j <= star; j++)
        {
            cout << "* ";
        }
        cout << endl;
        Sleep(500);
    }
}