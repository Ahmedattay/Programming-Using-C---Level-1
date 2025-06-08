#include <iostream>
#include <string>
using namespace std;
int main()
{
    string name;
    cout << "Enter your name: ";
    getline(cin, name); // Using getline to read a string with spaces
    cout << "INFORMATION" << endl;
    cout << "Name: " << name << endl;                              // Output the name entered by the user
    cout << "Length of name: " << name.length() << endl;           // Output the length of the name
    cout << "First character: " << name[0] << endl;                // Output the first character of the name
    cout << "Last character: " << name[name.length() - 1] << endl; // Output the last character of the name
    string Name2;
    cout << "Enter another name: ";
    cin >> Name2;                              // Using cin to read a single word
    string fullName = name + " " + Name2;      // Concatenating two strings
    cout << "Full name: " << fullName << endl; // Output the concatenated full name
    return 0;                                  // Return 0 to indicate successful execution
}