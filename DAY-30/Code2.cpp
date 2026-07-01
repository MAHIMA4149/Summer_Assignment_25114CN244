#include <iostream>
#include <string>
using namespace std;
int main() {
    string book[5] = {
        "C++",
        "Java",
        "Python",
        "DBMS",
        "OS"
    };
    cout << "Books Available:\n";
    for (int i = 0; i < 5; i++) {
        cout << i + 1 << ". " << book[i] << endl;
    }
    int ch;
    cout << "\nEnter book number to issue: ";
    cin >> ch;

    if (ch >= 1 && ch <= 5)
        cout << "Book Issued: " << book[ch - 1];
    else
        cout << "Invalid Choice";
    return 0;
}