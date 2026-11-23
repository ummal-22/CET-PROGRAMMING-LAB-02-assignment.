#include <iostream>
using namespace std;

int main()
{
    int age;
    char grade;
    float marks;
    double salary;
    bool pass;

    cout << "Enter Age: ";
    cin >> age;

    cout << "Enter Grade: ";
    cin >> grade;

    cout << "Enter Marks: ";
    cin >> marks;

    cout << "Enter Salary: ";
    cin >> salary;

    cout << "Enter Pass (1/0): ";
    cin >> pass;

    cout << "\nAge = " << age;
    cout << "\nGrade = " << grade;
    cout << "\nMarks = " << marks;
    cout << "\nSalary = " << salary;
    cout << "\nPass = " << pass;

    return 0;
}
