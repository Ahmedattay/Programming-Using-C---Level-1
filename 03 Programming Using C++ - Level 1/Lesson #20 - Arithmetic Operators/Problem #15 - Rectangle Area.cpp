#include <iostream>
using namespace std;
int main()
{
    int width = 0;
    int height = 0;
    cout << "Enter the width of the rectangle: ";
    cin >> width;
    cout << "Enter the height of the rectangle: ";
    cin >> height;
    int area = width * height;
    cout << "The area of the rectangle is: " << area << endl;
    return 0;
}