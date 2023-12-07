#include <iostream>
using namespace std;

int minmax(int arr[], int size)
{
    int x = arr[0];
    int y = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > x)
            x = arr[i];
        if (arr[i] < y)
            y = arr[i];
    }
    cout << x + y;
}

int main()
{
    int size = 5;
    int arr[5] = {5, 2, 4, 9, 6};
    minmax(arr, size);

    return 0;
}