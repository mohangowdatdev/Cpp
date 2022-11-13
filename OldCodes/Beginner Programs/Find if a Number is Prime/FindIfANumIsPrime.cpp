#include <bits/stdc++.h>
using namespace std;

int main(){
    int i,n;
    bool isprime = true;
    cout<<"Enter the Number : "<<endl;
    cin>>n;

    for(i=2; i<=n/2; ++i){
        if(n%i == 0){
            isprime = false;
            break;
        }
    }

    if(isprime){
        cout<<"The Number is Prime"<<endl;
    }
    else{
        cout<<"The Number is Composite"<<endl;
    }
    system("PAUSE");
    return 0;
}
