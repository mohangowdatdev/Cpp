#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int a[10],i,n;
    cout << "How many Elements ??" << endl;
    cin >> n;
    cout << "Elements : " << endl;
    for (i = 0; i < n;i++)
    {
        cout << "Element " << i + 1 << " ";
        cin >> a[i];
    }

    int start = 0, temp, end = n - 1;
    while (start<end){
        temp = a[start];
        a[start] = a[end];
        a[end] = temp;
        start++;
        end--;
    }
    cout << "Arrays is " << endl;
    for (i = 0; i < n; i++)
    {
        cout << a[i] <<" ";
    }
    return 0;
}