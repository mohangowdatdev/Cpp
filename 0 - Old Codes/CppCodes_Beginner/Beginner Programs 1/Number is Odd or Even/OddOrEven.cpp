#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,count=0;
    while(n!=0){
        if(count==10)
            break;
        cout<<"-- Enter 0 to Quit --"<<endl;
        cout<<"Enter the Number : ";
        cin>>n;
        cout<<endl;
        if(n%2==0){
            cout<<n<<" is an even number."<<endl;
        }
        else{
            cout<<n<<" is an odd number."<<endl;
        }
        cout<<"=========================================="<<endl;
        count++;
    }
    system("PAUSE");
}
