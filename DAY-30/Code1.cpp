#include <iostream>
#include <string>
using namespace std;
int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;
    int roll[n];
    string name[n];
    float marks[n];

    for (int i = 0; i < n; i++) {
        cout << "\nStudent " << i + 1 << endl;
        cout << "Enter Roll No: ";
        cin >> roll[i];

        cout << "Enter Name: ";
        cin >> name[i];

        cout << "Enter Marks: ";
        cin >> marks[i];
    }
    cout << "\n----- Student Records -----\n";
    cout << "Roll\tName\tMarks\n";

    for (int i = 0; i < n; i++) {
        cout << roll[i] << "\t" << name[i] << "\t" << marks[i] << endl;
    }
    return 0;
}