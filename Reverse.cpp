#include <iostream>
using namespace std;

int main() 
{
    char str[100];
    cout << "Enter a string: ";
    cin.getline(str, 100);

    char* start = str;   
    char* end = str;     

    while (*end != '\0') 
	{
        end++;
    }
    end--;  
    cout << "Reversed string: ";
    
    while (end >= start) 
	{
        cout << *end;   
        end--;          
    }
    cout << endl;
    return 0;
}


    

