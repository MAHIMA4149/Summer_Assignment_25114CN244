#include <iostream>
using namespace std;
int main() {
    int n, largestPrime = -1;
    cout << "Enter a number: ";
    cin >> n;
    for (int i = 2; i <= n; i++) {
        while (n % i == 0) {
            largestPrime = i;
            n /= i;
        }
    }
    cout << "Largest Prime Factor = " << largestPrime;
    return 0;
}