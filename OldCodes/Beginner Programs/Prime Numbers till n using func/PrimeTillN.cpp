#include <iostream>
using namespace std;

void primeorcomp(int a, int b)
{
    int isprime;
    for (int i = a; i <= b; i++)
    {
        isprime = 1;
        for (int div = 2; div < i; div++)
        {
            if (i % div == 0)
            {
                isprime = 0;
            }
        }

        if (isprime == 1)
        {
            cout << i << endl;
        }
    }
    return;
}

int main()
{
    int a, b;
    cout << "Number 1 : ";
    cin >> a;
    cout << "Number 2 : ";
    cin >> b;
    primeorcomp(a, b);
    system("PAUSE");
}