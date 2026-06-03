#include <iostream>
using namespace std;
int main() {
    int x, y, max;

    cout<< "Enter two numbers: ";
    cin >> x>> y;

    max = (x > y) ? x : y;
    while (true) {
        if (max % x == 0 && max % y == 0) {
            cout <<"LCM="<< max;
            break;
        }
        max++;
    }
    return 0;
}