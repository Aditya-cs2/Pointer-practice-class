#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() 
{
    int size;
    cout << "Enter the number of elements: ";
    cin >> size;

    if (size <= 0) 
	{
        cout << "Vector must have at least 1 element." << endl;
        return 0;
    }

    vector<int> numbers(size);
    srand(time(0));

    int* base = &numbers[0]; 

    cout << "Vector elements: ";
    for (int i = 0; i < size; i++) 
	{
        *(base + i) = rand() % 100;   
        cout << *(base + i) << " ";   
    }
    cout << endl;
    int* left = base;
    int* right = base + (size - 1);

    while (left < right) 
	{
        left = left + 1;   
        right = right - 1; 
    }

    if (left > right) 
	{
        left = left - 1;
    }

    cout << "Midpoint value: " << *left << endl;

    return 0;
}
    
    

    
