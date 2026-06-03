#include <iostream>
using namespace std;
int main() {
    int first, last, i, j;

    cout << "Enter first number: ";
    cin >> first;
    cout << "Enter last number: ";
    cin >> last;

    for (i = first; i <= last; i++) {
        if (i < 2)
            continue;

        for (j = 2; j < i; j++) {
            if (i % j == 0)
                break;
        }
        if (j == i)
            cout << i << " ";
    }
    return 0;
}