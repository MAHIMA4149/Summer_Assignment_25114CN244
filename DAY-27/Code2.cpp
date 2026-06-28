#include <iostream>
using namespace std;
struct Employee
{
    int id;
    char name[50];
    char department[30];
    float salary;
};
int main()
{
    Employee e;

    cout << "Enter Employee ID: ";
    cin >> e.id;

    cout << "Enter Name: ";
    cin >> e.name;

    cout << "Enter Department: ";
    cin >> e.department;

    cout << "Enter Salary: ";
    cin >> e.salary;

    cout << "\n----- Employee Details -----";
    cout << "\nID         : " << e.id;
    cout << "\nName       : " << e.name;
    cout << "\nDepartment : " << e.department;
    cout << "\nSalary     : " << e.salary;
    return 0;
}