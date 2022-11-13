#include <bits/stdc++.h>
using namespace std;

int main(){
    int isprime=1,n,i,div;
    cout<<"Enter The Number To Find Prime : ";
    cin>>n;

    cout<<"Prime Number: "<<endl;
    for ( i = 2; i <= n ; ++i)
    {
        isprime = 1;
        div=2;
        while(div<=i/2){
            if(i%div==0){
                isprime=0;
                break;
            }
            div=div+1;
        } 
        if (isprime==1){
            cout<<i<<" ";
        }
    }
    cout<<endl;
    system("PAUSE");
}
