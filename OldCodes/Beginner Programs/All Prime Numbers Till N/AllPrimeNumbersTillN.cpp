#include <iostream>
using namespace std;

int main(){
    int n,isprime;
    cout<<"Enter The Number : "<<endl;
    cin>>n;
     cout<<"The Prime Numbers are ..."<<endl;
    for(int i=2;i<=n;i++)
    { 
        isprime = 1;
        for(int div=2;div<i;div++)
            if(i%div==0)
                isprime = 0;

        if( isprime == 1){
            cout<<i<<endl;
        }

    }    

    system("PAUSE");
}
