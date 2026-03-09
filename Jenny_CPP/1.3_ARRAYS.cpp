#include <iostream>
using namespace std;

int main ()
{
    int arr[5] = {1, 4, 5, 2, 3};

    // Deleting a specific index
    int term;

    cout << "Which index to be deleted? ";
    cin >> term;

    for (int i = term-1; i <= 5; i++)
    {
        arr[i] = arr[i + 1];
    }

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    arr[4] = -1;
    cout << "\n";

    return 0;
}