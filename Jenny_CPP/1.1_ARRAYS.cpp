#include <iostream>
using namespace std;

// Collection of more than one element of same data type
// Stores data in continuous blocks inside a memory
// Indexing begins from 0

// Two ways of initializing: Compile time (Static) and Run time (Dynamic)
// Cant change size of array during run time (Drawback)

// Three types: 1D 2D and Multi-dimensional

int main ()
{

    int arr1[5] = {0, 2, 3, 5, 4}; // 1D array
    char arr2[5] = {'a', 'b', 'd', 'f', 'g'};
    int arr3[5];

    for (int i = 0; i < 5; i++)
    {
        cin >> arr3[i];
    }

    cout << "\n";

    for (int i = 0; i < 5; i++)
    {
        cout << arr3[i] << " ";
    }
    
    cout << "\n";

    return 0;
}