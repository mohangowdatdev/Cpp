#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
    int n;
    cout << "Number : " << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "* ";
            Sleep(50);
        }
        Sleep(500);
        cout << "\n";
    }
}