#include <iostream>
using namespace std;
int main() {
    int n, temp, rev = 0, digit;

    cout << "Enter a number: ";
    cin >> n;

     temp = n;
    while (n != 0) {
        digit = n % 10;
        rev = rev * 10 + digit;
        n = n / 10;
    }
    if (temp == rev)
        cout << "Palindrome Number";
    else
        cout << "Not a Palindrome Number";

    return 0;
}