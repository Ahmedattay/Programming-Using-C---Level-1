#include<iostream>
using namespace std;
int main(){
int A=10;
cout << "A = " << A << endl;
cout << "++A = " << ++A << endl; // Prefix increment: A is incremented before being used
cout << "A = " << A << endl; // A is now 11
cout << "A++ = " << A++ << endl; // Postfix increment: A is used before being incremented
cout << "A = " << A << endl; // A is now 12
cout << "--A = " << --A << endl; // Prefix decrement: A is decremented before being used
cout << "A = " << A << endl; // A is now 11
cout << "A-- = " << A-- << endl; // Postfix decrement: A is used before being decremented
cout << "A = " << A << endl; // A is now 10
return 0;
}