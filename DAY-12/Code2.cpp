#include <iostream>
#include <cmath>
using namespace std;
bool isArmstrong(int n) {
    int temp = n, sum = 0, digits = 0;
    int t = n;
    while (t > 0) {
        digits++;
        t /= 10;
    }
    t = n;
    while (t > 0) {
        sum += round(pow(t % 10, digits));
        t /= 10;
    }
    return sum == temp;
}

int main() {
    int n;
    cin >> n;
    if (isArmstrong(n))
        cout << "Armstrong";
    else
        cout << "Not Armstrong";
    return 0;
}