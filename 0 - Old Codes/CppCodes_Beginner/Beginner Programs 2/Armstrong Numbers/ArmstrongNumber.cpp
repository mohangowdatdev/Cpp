#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n,num,sum=0;
    cout << "Number : ";
    cin >> n;
    num = n;

    while (n > 0)
    {
        int ld = n % 10;
        sum = sum + (ld*ld*ld);
        n = n / 10;
    }

    if(sum == num){
        cout << "Hurray !! It's an Armstrong Number. " << endl;
    }
    else{
        cout << "Not an Armstrong :(" << endl;
    }
    system("PAUSE");
}