#include <iostream>
#include <string>
using namespace std;
int main()
{
    int Number;
    string Name;
    string country;
    cout << "Enter a number: ";
    cin >> Number; // Read an integer from the user
    cin.ignore();  // Clear the newline character from the input buffer
    //! If we didi't use cin.ignore(), the compiler will read the name as an empty string
    cout << "Enter your name: ";
    getline(cin, Name); // Read a string with spaces from the user
    cout << "Enter your country: ";
    cin >> country; // Read a single word string from the user
    cout << "Information:" << endl;
    cout << "Number: " << Number << endl;   // Output the number entered by the user
    cout << "Name: " << Name << endl;       // Output the name entered by the user
    cout << "Country: " << country << endl; // Output the country entered by the user
    return 0;                               // Return 0 to indicate successful execution
}