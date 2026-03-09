#include <iostream>
using namespace std;

int main ()
{
    int arr1[5] = {7, 9, 1, 3, 4};
    int arr2[5];

    // Traversal of array:
    for (int i = 0; i < 5; i++)
    {
        cout << arr1[i] << " ";
    }
    cout << "\n";

    // Insersion in array:
    for (int i = 0; i < 5; i++)
    {
        cin >> arr2[i];
    }

    return 0;
}