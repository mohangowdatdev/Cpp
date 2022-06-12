#include <iostream>
using namespace std;

int addition2(int a, int b)
{
    int sum = a + b;
    return sum;
}
int addition3(int a, int b, int c)
{
    int sum = a + b + c;
    return sum;
}
int addition4(int a, int b, int c, int d)
{
    int sum = a + b + c + d;
    return sum;
}
int addition5(int a, int b, int c, int d, int e)
{
    int sum = a + b + c + d + e;
    return sum;
}

int main()
{
    int response = 1;
    while (response == 1)
    {
        cout << "How many Numbers do you want to add ? (max 5)" << endl;
        int n;
        cin >> n;
        cout << "Enter the numbers : " << endl;
        int a = 1, b = 1, c = 1, d = 1, e = 1;
        if (n == 2)
        {
            cin >> a >> b;
            cout << "Sum ="<<addition2(a,b);
        }
        if (n == 3)
        {
            cin >> a >> b >> c;
            cout << "Sum =" << addition3(a, b, c);
        }
        if (n == 4)
        {
            cin >> a >> b >> c >> d;
            cout << "Sum =" << addition4(a, b, c, d);
        }
        if (n == 5)
        {
            cin >> a >> b >> c >> d >> e;
            cout << "Sum =" << addition5(a, b, c, d, e);
        }
        if (n>5 || n<2){
            cout << "Incorrect Input" << endl;
        }
        cout << endl;
        cout << "Do you want to continue again ? (yes=1)/(no=0)" << endl;
        cin >> response;
        if (response == 0)
        {
            cout << "Alright Byeeee!!" << endl;
            break;
        }
        if (response == 1)
        {
            continue;
        }
        else if (response != 1 && response != 0)
        {
            cout << "Incorrect Option. Byeee" << endl;
            break;
        }
    }
}