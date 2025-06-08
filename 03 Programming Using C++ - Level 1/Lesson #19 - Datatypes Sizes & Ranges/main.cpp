#include <iostream>
#include <climits>
#include <cfloat>
using namespace std;
int main()
{
    cout << "Size of char: " << sizeof(char) << " bytes" << endl;
    cout << "Size of int: " << sizeof(int) << " bytes" << endl;
    cout << "Size of float: " << sizeof(float) << " bytes" << endl;
    cout << "Size of double: " << sizeof(double) << " bytes" << endl;
    cout << "Size of long long: " << sizeof(long long) << " bytes" << endl;

    cout << "\nRange of char: ["
         << static_cast<int>(CHAR_MIN)
         << ", "
         << static_cast<int>(CHAR_MAX)
         << "]"
         << endl;

    cout << "Range of int: ["
         << INT_MIN
         << ", "
         << INT_MAX
         << "]"
         << endl;

    cout << "Range of float: ["
         << FLT_MIN
         << ", "
         << FLT_MAX
         << "]"
         << endl;

    cout << "Range of double: ["
         << DBL_MIN
         << ", "
         << DBL_MAX
         << "]"
         << endl;

    return 0;
}