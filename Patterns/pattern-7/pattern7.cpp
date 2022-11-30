#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
    int i, j, count = 11, n;
    cout << "Number : ";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            cout << count << "  ";
            count += 2;
            Sleep(100);
        }
        Sleep(500);
        cout << endl;
    }
}