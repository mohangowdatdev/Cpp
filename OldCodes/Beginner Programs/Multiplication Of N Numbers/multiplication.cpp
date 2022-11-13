#include <bits/stdc++.h>
using namespace std;

int main(){
    int a[30],n,i,p=1;
    cout<<"Enter the Number of Elements : "<<endl;
    cin>>n;
    if(n>30){
        cout<<"Out Of Range Multiplication !"<<endl;
        system("PAUSE");
        exit(0);
    }
    cout<<"Elements : "<<endl;
    for(i=0;i<n;i++){
        cin>>a[i];
        p=a[i]*p;
    }
    /*//calculating multiplication
    for(i=0;i<n;i++){
        p = p*a[0];
    } */


    cout<<"The Total Value is "<<p<<endl;
    system("PAUSE");
}
