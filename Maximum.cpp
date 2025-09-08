#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() 
{
    const int SIZE = 6;
    int arr[SIZE];

    srand(time(0));

    cout << "Random numbers generated: ";
    for (int i = 0; i < SIZE; i++) 
	{
        *(arr + i) = rand() % 100;  
        cout << *(arr + i) << " ";
    }
    cout << endl;

    int* max_ptr = arr; 

    for (int i = 1; i < SIZE; i++) 
	{
        if (*(arr + i) > *max_ptr) 
		{
            max_ptr = (arr + i);  
        }
    }

    cout << "The maximum value is: " << *max_ptr << endl;
    return 0;
}
