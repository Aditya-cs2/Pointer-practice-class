#include <iostream>
using namespace std;

int main() 
{
    char str[100];
    cout << "Enter a string: ";
    cin.getline(str, 100);

    char* p = str; 
    int length = 0;

    while (*(p + length) != '\0') 
	{  
        length++;
    }
    cout << "Length of the string: " << length << endl;

    return 0;
}
