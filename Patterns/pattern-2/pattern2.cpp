#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
    int n, i, j;
    cout << "Number : ";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            cout << i << " ";
            Sleep(50);
        }
        Sleep(500);
        cout << "\n";
    }
}