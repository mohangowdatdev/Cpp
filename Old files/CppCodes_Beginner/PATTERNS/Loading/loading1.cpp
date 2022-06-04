#include <iostream>
#include <stdio.h>
#include <Windows.h>
using namespace std;

int main()
{
    int n, count = 1;
    cout << "How many seconds ?? " << endl;
    cin >> n;
    while (count <= n)
    {
        cout << "\r /  /  /                     ";
        Sleep(250);
        cout << "\r --  --  --                     ";
        Sleep(250);
        cout << "\r \\  \\  \\                     ";
        Sleep(250);
        cout << "\r |  |  |                     ";
        Sleep(250);
        /*  cout << "\r +";
        Sleep(500); */
        cout << "\r .  .  .                     ";
        count++;
    }
    cout << "\r Thank You for Waiting !!" << endl;
    system("PAUSE");
}