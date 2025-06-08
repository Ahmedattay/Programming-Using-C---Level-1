#include <iostream>
using namespace std;
int main()
{
    enum country
    {
        Egypt = 1,
        Ksa = 2,
        USA = 3,
        UK = 4,
        France = 5
    }; // Define an enum for countries
    int choice;
    cout << "Choose a country:" << endl;
    cout << "1. Egypt" << endl;
    cout << "2. KSA" << endl;
    cout << "3. USA" << endl;
    cout << "4. UK" << endl;
    cout << "5. France" << endl;
    cout << "Enter your choice (1-5): ";
    cin >> choice; // Read the user's choice
    cout << "************************" << endl;
    if (choice == Egypt)
    { // Check if the choice is Egypt
        cout << "You chose Egypt." << endl;
    }
    else if (choice == Ksa)
    { // Check if the choice is KSA
        cout << "You chose KSA." << endl;
    }
    else if (choice == USA)
    { // Check if the choice is USA
        cout << "You chose USA." << endl;
    }
    else if (choice == UK)
    { // Check if the choice is UK
        cout << "You chose UK." << endl;
    }
    else if (choice == France)
    { // Check if the choice is France
        cout << "You chose France." << endl;
    }
    else
    { // If the choice is not valid
        cout << "Invalid choice. Please enter a number between 1 and 5." << endl;

    }
    return 0;
}