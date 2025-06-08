#include <iostream>
using namespace std;
int main()
{
    int A = 20;
    int B = 30;
    int C = 40;
    int D = 50; // This variable is not used in the program, but it can be removed if not needed
    int E = 60; // This variable is not used in the program, but it can be removed if not needed
    cout << "A = " << A << endl;
    cout << "B = " << B << endl;
    cout << "C = " << C << endl;
    cout << "D = " << D << endl;                                                                                           // Output the value of D, though it's not used in calculations
    cout << "E = " << E << endl;                                                                                           // Output the value of E, though it's not used in calculations
    int sum = A + B + C;                                                                                                   // Using the assignment operator to calculate the sum
    cout << "The sum of A, B, and C is: " << sum << endl;                                                                  // Output the result
    A += 10;                                                                                                               // Increment A by 10 using the assignment operator
    cout << "After incrementing A by 10, A = " << A << endl;                                                               // Output the new value of A
    B -= 5;                                                                                                                // Decrement B by 5 using the assignment operator
    cout << "After decrementing B by 5, B = " << B << endl;                                                                // Output the new value of B
    C *= 2;                                                                                                                // Multiply C by 2 using the assignment operator
    cout << "After multiplying C by 2, C = " << C << endl;                                                                 // Output the new value of C
    D /= 2;                                                                                                                // Divide D by 2 using the assignment operator
    cout << "After dividing D by 2, D = " << D << endl;                                                                    // Output the new value of D
    E %= 3;                                                                                                                // Calculate the remainder of E divided by 3 using the assignment operator
    cout << "After calculating E modulo 3, E = " << E << endl;                                                             // Output the new value of E
    cout << "The final values are: A = " << A << ", B = " << B << ", C = " << C << ", D = " << D << ", E = " << E << endl; // Output all final values
    return 0;                                                                                                              // Return 0 to indicate successful execution
}