#include <iostream>
using namespace std;

int fact(int n)
{
    int factorial = 1;
    for (int i = 2; i <= n; i++)
    {
        factorial *= i;
    }
    return factorial;
}

int main()
{
    int n,r;
    cout << "Combinations Calculator (nCr)" << endl;
    cout << "Enter n : " << endl;
    cin >> n;
    cout << "Enter r : " << endl;
    cin >> r;

    int diff = n - r;
    int comb = fact(n)/(fact(diff)*fact(r));
    cout << "Value of nCr with n="<<n <<" and r=" <<r<<" is "<< comb << endl;
    system("PAUSE");
    return 0;
}