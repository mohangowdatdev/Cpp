#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Number : ";
    cin >> n;
    cout << "The Factors are " << endl;
    for (int i = 1; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";
        }
    }
    cout << endl;
    system("PAUSE");
}