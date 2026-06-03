#include <iostream>
using namespace std;
int main() {
    int n, i;
    bool Prime = true;
    cout << "Enter a number: ";
    cin >> n;

    if (n <= 1) {
        Prime = false;
    }
     else {
        for (i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
         Prime = false;
        break;
            }
        }
    }
    if (Prime)
        cout << n << " is a Prime Number.";
    else
        cout << n << " is not a Prime Number.";
    return 0;
}