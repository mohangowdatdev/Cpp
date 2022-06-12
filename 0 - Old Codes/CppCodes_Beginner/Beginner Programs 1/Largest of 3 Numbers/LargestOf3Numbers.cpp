#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c,lar;
    cout<<"Enter the Numbers : "<<endl;
    cin>>a>>b>>c;
    if (a>b) {
        lar=a;
    }
    else
    {
        lar=b;
    }
    if(lar<c){
        lar=c;
    }
    else{
        cout<<"Largest of them is "<<lar<<endl;
        exit(0);
    }
    cout<<"Largest Number : "<<lar<<endl;
    system("PAUSE");
}
