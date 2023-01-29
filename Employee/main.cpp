// Importing required libraries.
#include <iostream>

using namespace std;

class login_system
{
public:
    int main_login_system()
    {
        char id[20], pass[20];
        cout << "\n\n-------------------------------------------------" << endl;
        cout << "****** | E-CORP Enterprises pvt ltd 2023 | ******" << endl;
        cout << "-------------------------------------------------" << endl;
        cout << "\n Enter Login Credentials"
             << endl;
        cout << "-------------------------" << endl;
        cout << "\n Credential : ";
        cin >> id;
        cout << "\n Password   : ";
        cin >> pass;
        cout << "\n-------------------------" << endl;
    }
} login;

int main()
{
    int count = 0;
    while (count < 1)
    {
        login.main_login_system();
        count++;
    }
}