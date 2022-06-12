#include<iostream>
#include<Windows.h>
using namespace std;

int main(){
    int n, i, j;
    cout << "Number : ";
    cin>>n;
    Sleep(2000);
    for (i = 1; i <= n;i++){
        for (j = 1; j <= i;j++){
            cout << i << " ";
        }
        cout << endl;
        Sleep(1000);
    }
    system("PAUSE");
}