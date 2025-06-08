#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int A, B, C;
    cout << "Enter three numbers: ";
    cin >> A >> B >> C;
    int sum = A + B + C;                                                                        // Calculate the sum of A, B, and C
    cout << "The sum of " << A << ", " << B << ", and " << C << " is: " << sum << endl;         // Output the result
    cout << "Square root of " << A << " is: " << sqrt(A) << endl;                               // Calculate and output the square root of A
    cout << "Power of " << A << " raised to " << B << " is: " << pow(A, B) << endl;             // Calculate and output A raised to the power of B
    cout << "Absolute value of " << C << " is: " << abs(C) << endl;                             // Calculate and output the absolute value of C
    cout << "Ceiling value of " << A << " is: " << ceil(A) << endl;                             // Calculate and output the ceiling value of A
    cout << "Floor value of " << B << " is: " << floor(B) << endl;                              // Calculate and output the floor value of B
    cout << "Trigonometric sine of " << A << " degrees is: " << sin(A * 3.14 / 180) << endl;    // Calculate and output the sine of A in radians
    cout << "Trigonometric cosine of " << B << " degrees is: " << cos(B * 3.14 / 180) << endl;  // Calculate and output the cosine of B in radians
    cout << "Trigonometric tangent of " << C << " degrees is: " << tan(C * 3.14 / 180) << endl; // Calculate and output the tangent of C in radians
    cout << "Exponential of " << A << " is: " << exp(A) << endl;                                // Calculate and output the exponential of A
    cout << "Logarithm of " << B << " is: " << log(B) << endl;                                  // Calculate and output the natural logarithm of B
    cout << "Logarithm base 10 of " << C << " is: " << log10(C) << endl;                        // Calculate and output the logarithm base 10 of C
    cout << "Maximum of " << A << " and " << B << " is: " << max(A, B) << endl;                 // Calculate and output the maximum of A and B
    cout << "Minimum of " << A << " and " << C << " is: " << min(A, C) << endl;                 // Calculate and output the minimum of A and C
    return 0;                                                                                   // Return 0 to indicate successful execution
}