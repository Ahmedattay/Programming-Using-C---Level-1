#include <iostream>
using namespace std;
int main()
{
    string name = "Ahmed";
    int Age = 20;
    string City = "Cairo";
    string Country = "Egypt";
    int MonthlySalary = 1000;
    int YearlySalary = MonthlySalary * 12;
    char Gender = 'M';
    bool IsMarried = false;
    cout << "Name: " << name << endl;
    cout << "Age: " << Age << endl;
    cout << "City: " << City << endl;
    cout << "Country: " << Country << endl;
    cout << "Monthly Salary: " << MonthlySalary << endl;
    cout << "Yearly Salary: " << YearlySalary << endl;
    cout << "Gender: " << Gender << endl;
    cout << "Is Married: " << (IsMarried ? "1" : "0") << endl;
    cout << "By Ahmed Attay Kamal" << endl;
    return 0;
}