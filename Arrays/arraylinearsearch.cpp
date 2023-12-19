#include <iostream>
using namespace std;

int main()
{
    int x;
    cout << "Enter element to be found : ";
    cin >> x;
    int arr[5] = {3, 6, 8, 3, 5};
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] == x)
        {
            // cout<<"Element found";
            cout << "Element Found";
        }
    }

    return 0;
}