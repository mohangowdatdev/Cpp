#include<iostream>
#include<Windows.h>
using namespace std;

int main(){
    int n, i, j, count = 1;
    ;
    cout << "Number : ";
    cin >> n;
    Sleep(2000);
    for (i = 1;i<=n;i++){
        for (j = 1; j <= i;j++){
            if((i+j)%2==0){
                cout << "1 ";
            }
            else{
                cout << "0 ";
            }
            count++;
        }
        cout << endl;
        Sleep(1000);
    }
    system("PAUSE");
}