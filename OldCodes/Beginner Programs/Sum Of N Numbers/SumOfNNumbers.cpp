#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,sum;
    cout<<"Enter The Number : "<<endl;
    cin>>n;
    sum=n;
    while (n>0){
        n=n-1;
        sum=sum+n;
    }
    cout<<"Sum is "<<sum<<endl;
    system("PAUSE");
}
