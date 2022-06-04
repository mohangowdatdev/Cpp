#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
    int n, i, j;
    cout << "Number : ";
    cin >> n;
    Sleep(2000);
    for (i = n; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
        Sleep(1000);
    }
    system("PAUSE");
}