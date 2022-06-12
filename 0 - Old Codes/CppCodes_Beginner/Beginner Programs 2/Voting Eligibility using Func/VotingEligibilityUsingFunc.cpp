#include <iostream>
using namespace std;

void vote(int age){
    if(age>=18){
        cout << "Congratulations You can Vote. Hurray!!" << endl;
    }
    else{
        cout << "Come back after 18 :(" << endl;
    }
    return;
}

int main(){
    int age;
    cout << "Enter Age : " << endl;
    cin >> age;

    vote(age);
    system("PAUSE");
    return 0;
}