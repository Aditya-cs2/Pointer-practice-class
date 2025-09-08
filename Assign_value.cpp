#include <iostream>
using namespace std;

int main() 
{
    int a, b;
    cout << "Enter first integer: ";
    cin >> a;
    cout << "Enter second integer: ";
    cin >> b;

    int* ptr_a = &a;
    int* ptr_b = &b;

    cout << "Value of a: " << *(ptr_a + 0) << endl; 
    cout << "Value of b: " << *(ptr_b + 0) << endl;

    return 0;
}
