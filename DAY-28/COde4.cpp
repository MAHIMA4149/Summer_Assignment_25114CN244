#include <iostream>
using namespace std;
struct Contact
{
    char name[50];
    char phone[15];
    char email[50];
};
int main()
{
    Contact c;

    cout << "Enter Name: ";
    cin >> c.name;

    cout << "Enter Phone Number: ";
    cin >> c.phone;

    cout << "Enter Email: ";
    cin >> c.email;
    cout << "\n----- Contact Details -----";
    cout << "\nName  : " << c.name;
    cout << "\nPhone : " << c.phone;
    cout << "\nEmail : " << c.email;
    return 0;
}