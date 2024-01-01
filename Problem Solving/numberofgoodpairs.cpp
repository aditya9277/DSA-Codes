#include <iostream>
using namespace std;

int main()
{
    int nums[6] = {1, 2, 3, 1, 1, 3};
    int n = 6;
    int count = 0;
    int i=0;
    while (i < (n - 1))
    {
        for (int j = i + 1; j < n; j++)
        {
            if (nums[i] == nums[j])
            {
                count++;
            }
        }
        i++;
    }
    cout<<count;
    return 0;
}