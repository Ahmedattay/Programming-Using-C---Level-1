#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter value for a: ";
    cin >> a;
    cout << "Enter value for b: ";
    cin >> b;
    cout << "Enter value for c: ";
    cin >> c;
    int z = a + b + c;
    cout << "\nCalculation Result:\n";
    cout << "---------------------\n";
    cout << a << " +\n"
         << b << " +\n"
         << c << "\n"
         << "-------------\n"
         << z << endl;
    cout << "By Ahmed Attay Kamal" << endl;
    return 0;
}