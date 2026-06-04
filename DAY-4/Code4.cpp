#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int first , last;
    cout << "Enter first number: ";
    cin >> first;
    cout << "Enter last number: ";
    cin >> last;
    cout << "Armstrong numbers between " << first << " and " << last << " are:\n";
    for (int num = first; num <= last; num++) {
        int temp = num, dig = 0;
        double sum = 0;
        while (temp != 0) {
         dig++;
        temp /= 10;
        }
        temp = num;
        while (temp != 0) {
            int digt = temp % 10;
            sum += pow(digt, dig);
            temp /= 10;
        }
        if ((int)sum == num)
            cout << num << " ";
    }
    return 0;
}