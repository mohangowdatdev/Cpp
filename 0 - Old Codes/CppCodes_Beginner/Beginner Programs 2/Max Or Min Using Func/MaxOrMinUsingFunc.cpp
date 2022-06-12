#include<iostream>
using namespace std;

int maxof(int a,int b,int c)
{
    int maxy;
    if(a>b){
        maxy = a;
    }
    else{
        maxy = b;
    }
    if(c > maxy){
        maxy = c;
    }
    return maxy;
}

int minof(int a, int b, int c)
{
    int miny;
    if (a > b)
    {
        miny = b;
    }
    else
    {
        miny = a;
    }
    if (c < miny)
    {
        miny = c;
    }
    return miny;
}

int main(){
    int a, b, c;
    cout << "Enter Three Numbers : " << endl;
    cin >> a >> b >> c;
    cout << "Maximum : " << maxof(a, b, c) << endl;
    cout << "Minimum : " << minof(a, b, c) << endl;
    system("PAUSE");
    return 0;
}