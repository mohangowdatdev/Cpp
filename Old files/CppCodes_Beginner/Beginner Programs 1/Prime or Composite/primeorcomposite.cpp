#include <iostream>
using namespace std;

int main()
{
    int n;
    bool prime = 1;
    cout << "Enter the Number: ";
    cin >> n;
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            prime = 0;
            break;
        }
        else
        {
            prime = 1;
            break;
        }
    }
    if (prime == 1)
    {
        cout << "Prime" << endl;
        
    }
    else
    {
        cout << "Not Prime" << endl;
    }
    system("PAUSE");
}