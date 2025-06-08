#include <iostream>
using namespace std;
int main()
{
    cout << "please enter first number: ";
    int a;
    cout << "please enter second number: ";
    int b;
    cin >> a >> b;
    cout << "Addition: " << (a + b) << endl;
    cout << "Subtraction: " << (a - b) << endl;
    cout << "Multiplication: " << (a * b) << endl;
    cout << "Division: " << (a / b) << endl;
    cout << "Modulus: " << (a % b) << endl;
    return 0;
}