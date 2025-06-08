#include <iostream>
using namespace std;
struct Information
{
    string Name;
    int Age;
    string Address;
    string PhoneNumber;
};
int main()
{
    Information person;
    person.Name = "Ahmed";
    person.Age = 25;
    person.Address = "123 Main St";
    person.PhoneNumber = "123-456-7890";
    cout << "Name: " << person.Name << endl;
    cout << "Age: " << person.Age << endl;
    cout << "Address: " << person.Address << endl;
    cout << "Phone Number: " << person.PhoneNumber << endl;
    return 0;
}