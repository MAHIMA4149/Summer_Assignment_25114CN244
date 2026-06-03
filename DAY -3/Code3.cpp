#include <iostream>
using namespace std;
int main() {
    int x, y, GCD;

    cout << "Enter two numbers: ";
    cin >> x >> y;
    for (int i = 1; i <= x && i <= y; i++) {
        if (x % i == 0 && y % i == 0)
            GCD = i;
    }

    cout << "GCD=" << GCD;
    return 0;
}