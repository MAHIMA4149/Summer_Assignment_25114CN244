#include <iostream>
using namespace std;
struct Student
{
    float roll;
    char name[50];
    float marks;
};
int main()
{
    Student s;
    cout << "Enter Roll No: ";
    cin >> s.roll;

    cout << "Enter Name: ";
    cin >> s.name;

    cout << "Enter Marks: ";
    cin >> s.marks;

    cout << "\n----- Student Record -----";
    cout << "\nRoll No : " << s.roll;
    cout << "\nName    : " << s.name;
    cout << "\nMarks   : " << s.marks;
    return 0;
}