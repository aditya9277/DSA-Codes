#include <iostream>
using namespace std;

void printArr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void incArray(int arr[], int size)
{
    arr[0] = arr[0] + 10;
}

int main()
{
    int size = 5;
    int arr[] = {2, 5, 7, 8, 1};
    incArray(arr, size);
    printArr(arr, size);

    return 0;
}