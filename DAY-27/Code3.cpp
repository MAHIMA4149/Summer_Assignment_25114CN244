#include <iostream>
using namespace std;
struct Salary
{
    int empId;
    char name[50];
    float basic, hra, da, gross;
};
int main()
{
    Salary s;
    cout << "Enter Employee ID: ";
    cin >> s.empId;

    cout << "Enter Name: ";
    cin >> s.name;

    cout << "Enter Basic Salary: ";
    cin >> s.basic;

    s.hra = 0.20 * s.basic;
    s.da = 0.10 * s.basic;
    s.gross = s.basic + s.hra + s.da;

    cout << "\n----- Salary Details -----";
    cout << "\nEmployee ID : " << s.empId;
    cout << "\nName        : " << s.name;
    cout << "\nBasic Salary: " << s.basic;
    cout << "\nHRA         : " << s.hra;
    cout << "\nDA          : " << s.da;
    cout << "\nGross Salary: " << s.gross;
    return 0;
}