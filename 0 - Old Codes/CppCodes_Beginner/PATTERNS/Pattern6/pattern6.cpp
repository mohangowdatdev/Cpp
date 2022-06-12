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
        for (j = 1; j <= n; j++)
        {
            if (j <= n - i)
            {
                cout << " ";
            }
            else
            {
                cout << "* ";
            }
        }
        Sleep(1000);
        cout << endl;
    }
    system("PAUSE");
}