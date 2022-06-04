#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
    int n, i, j, k;
    cout << "Number : ";
    cin >> n;
    Sleep(2000);
    int space;
    for (i = 1; i <= n; i++)
    {
        space = n - i;
        for (j = 1; j <= space; j++)
        {
            cout << " ";
        }
        for (k = 1; k <= i; k++)
        {
            cout << k << " ";
        }
        cout << endl;
        Sleep(500);
    }
    system("PAUSE");
}