#include <iostream>
using namespace std;
int main()
{
    int FirstNumber = 0;
    int SecondNumber = 0;
    cin >> FirstNumber;
    cin >> SecondNumber;
    cout << "Before swapping:" << endl;
    cout << "First Number: " << FirstNumber << endl;
    cout << "Second Number: " << SecondNumber << endl;
    int Temp = FirstNumber;
    FirstNumber = SecondNumber;
    SecondNumber = Temp;
    cout << "After swapping:" << endl;
    cout << "First Number: " << FirstNumber << endl;
    cout << "Second Number: " << SecondNumber << endl;
    return 0;
}