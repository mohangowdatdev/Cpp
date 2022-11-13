#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,fac;
    cout<<"Enter the Number : "<<endl;
    cin>>n;
    fac=1;
    while(n>0){
        fac=fac*n;
        n--;
    }
    cout<<"Factorial Value : "<<fac<<endl;
    system("PAUSE");
}
