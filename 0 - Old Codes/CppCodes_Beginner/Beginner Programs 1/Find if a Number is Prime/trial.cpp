#include <bits/stdc++.h>
using namespace std;

int main(){
    int div=2,n;
    bool isprime = true;    //a number assumed to be prime by default
    cout<<"Enter the Number : "<<endl;
    cin>>n;


    while(div<=n/2){    //a number cannot be prime if its divisible by any number btw 2 and num/2 example is 12 is not a prime number because 12 is divisible by many numbers btw 2 and 12/2=6 
        if(n%div==0){  //to check if the number is divisible if yes then boolean turns false
            isprime=false;
            break;
        }
        div=div+1; //incrementing to check all numbers between 2 and half of the given number
    }  

    if(isprime){
        cout<<"The Number is Prime"<<endl;
    }
    else{
        cout<<"The Number is Composite"<<endl;
    }
    system("PAUSE");
}
