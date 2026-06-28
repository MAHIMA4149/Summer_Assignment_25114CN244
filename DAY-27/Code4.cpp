#include <iostream>
using namespace std;
struct Marksheet
{
    int roll;
    char name[50];
    int m1, m2, m3;
    int total;
    float percentage;
};
int main()
{
    Marksheet s;
    cout << "Enter Roll No: ";
    cin >> s.roll;

    cout << "Enter Name: ";
    cin >> s.name;

    cout << "Enter Marks of 3 Subjects: ";
    cin >> s.m1 >> s.m2 >> s.m3;

    s.total = s.m1 + s.m2 + s.m3;
    s.percentage = s.total / 3.0;

    cout << "\n----- Marksheet -----";
    cout << "\nRoll No    : " << s.roll;
    cout << "\nName       : " << s.name;
    cout << "\nTotal Marks: " << s.total;
    cout << "\nPercentage : " << s.percentage << "%";
    if (s.percentage >= 90)
        cout << "\nGrade : A";
    else if (s.percentage >= 75)
        cout << "\nGrade : B";
    else if (s.percentage >= 60)
        cout << "\nGrade : C";
    else if (s.percentage >= 40)
        cout << "\nGrade : D";
    else
        cout << "\nGrade : F";
    return 0;
}