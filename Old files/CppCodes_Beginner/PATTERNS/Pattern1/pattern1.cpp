#include <iostream>
#include <Windows.h> 
using namespace std;

int main(){
    int r, c, i, j;
    cout << "Rows : ";
    cin >> r;
    cout << "Columns : ";
    cin >> c;
    if(c==r){  
        cout << "Will you stop kidding ??" << endl;
        system("PAUSE");
        exit(1);
    }
    Sleep(1000);
    cout << "Alright Just a moment !!" << endl;
    Sleep(3000);
    for (i = 1; i <= r; i++)
    {
        for (j = 1; j <= c; j++)
        {
            cout << "* ";
        }
        Sleep(1000);
        cout << endl;
    }
    system("PAUSE");
}
