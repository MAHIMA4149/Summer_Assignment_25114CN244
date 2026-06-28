#include <iostream>
using namespace std;
struct Bank
{
    int accNo;
    char name[50];
    float balance;
};
int main(){
    Bank b;
    float deposit, withdraw;

    cout << "Enter Account Number: ";
    cin >> b.accNo;

    cout << "Enter Account Holder Name: ";
    cin >> b.name;

    cout << "Enter Initial Balance: ";
    cin >> b.balance;

    cout << "Enter Deposit Amount: ";
    cin >> deposit;
    b.balance += deposit;

    cout << "Enter Withdraw Amount: ";
    cin >> withdraw;
    if (withdraw <= b.balance)
        b.balance -= withdraw;
    else
        cout << "Insufficient Balance!\n";
    cout << "\n----- Account Details -----";
    cout << "\nAccount No : " << b.accNo;
    cout << "\nName       : " << b.name;
    cout << "\nBalance    : " << b.balance;
    return 0;
}