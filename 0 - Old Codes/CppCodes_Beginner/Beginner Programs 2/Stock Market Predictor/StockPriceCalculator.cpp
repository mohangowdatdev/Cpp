#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
    cout << "How Many years ?? -- ";
    int y;
    cin >> y;
    cout << "How much did you invest ?? -- ";
    float m, m2;
    cin >> m;
    m2 = m;
    cout << "Expected Percentage ?? -- ";
    float p;
    cin >> p;
    Sleep(1000);
    cout << "Years = " << y << " | Amount Invested = " << m << " | Average Returns = " << p << "%" << endl;
    Sleep(3000);
    float per = p / 100;
    for (int i = 1; i <= y; i++)
    {
        float m1 = m;
        float inc = per * m;
        m = inc + m;
        cout << "Year = " << 2021 + i << " | Increase this year = " << inc << " | Value = " << m1 << " --> " << m << endl;
        Sleep(500);
    }
    cout << "" << endl;
    Sleep(2000);
    cout << "Total Sum at end of year " << y << " is " << m << endl;
    system("pause");
}
