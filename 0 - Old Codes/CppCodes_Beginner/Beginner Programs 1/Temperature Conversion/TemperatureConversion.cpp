#include <bits/stdc++.h>
using namespace std;

int main(){
    float f, c, temp;
    cout<<"Which Conversion are you doing ? \n 1 -> Fahrenheit to Celsius(`F) \n 2 -> Celsius to Fahrenheit(`C)"<<endl;
    cin>>temp;
    if(temp == 1){
        cout<<"Enter the Fahrenheit Temperature : "<<endl;
        cin>>f;
        c =  (f-32)*5/9;
        cout<<"The Celsius Temperature is "<<c<<endl;
    }
    else if(temp==2){
        cout<<"Enter the Celsius Temperature : "<<endl;
        cin>>c;
        f=(c*9/5)+32;
        cout<<"The Fahrenheit Temperature is "<<f<<endl;
    }
    else {
        cout<<"Wrong Input."<<endl;
    }
    system("PAUSE");
}
