#include <iostream>
using namespace std;
int main()
{
    char Gender;
    bool IsMarried;
    string name;
    int Age;
    string City;
    string Country;
    int MonthlySalary;
    cout << "Enter your name: ";
    cin >> name;
    cout << "Enter your age: ";
    cin >> Age;
    cout << "Enter your monthly salary: ";
    cin >> MonthlySalary;
    cout << "Enter your city: ";
    cin >> City;
    cout << "Enter your country: ";
    cin >> Country;
    cout << "Enter your gender (M/F): ";
    cin >> Gender;
    cout << "Are you married? (1 for Yes, 0 for No): ";
    cin >> IsMarried;
    int YearlySalary = MonthlySalary * 12;
    cout << "\nUser Information:\n";
    cout << "-------------------\n";
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