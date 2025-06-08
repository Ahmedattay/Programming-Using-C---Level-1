#include <iostream>
using namespace std;
int main()
{
    int FirstNumber = 0;
    int SecondNumber = 0;
    int ThirdNumber = 0;

    cout << "Please enter the first number: ";
    cin >> FirstNumber;

    cout << "Please enter the second number: ";
    cin >> SecondNumber;

    cout << "Please enter the third number: ";
    cin >> ThirdNumber;

    int SumOfNumbers = FirstNumber + SecondNumber + ThirdNumber;

    cout << "The sum of the three numbers is: " << SumOfNumbers << endl;

    return 0;
}