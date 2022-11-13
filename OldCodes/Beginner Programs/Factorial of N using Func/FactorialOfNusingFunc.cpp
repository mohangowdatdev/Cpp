#include <iostream>
using namespace std;

int fact(int n){
    int factorial = 1;
    for (int i = 2; i <= n;i++){
        factorial *= i;
    }
    return factorial;
}

int main(){
    int n;
    cout << "Enter Number : ";
    cin >> n;

    int ans = fact(n);
    cout<<"Factorial is "<<ans<<endl;
    system("PAUSE");
    return 0;
}