#include <iostream>
using namespace std;

int main()
{
    int x = 134;
    long long rev = 0;
    long long y = x;
    while (x > 0)
    {
        int t = x % 10;
        x /= 10;
        rev = rev * 10 + t;
    }
    if (rev == y)
    {
        return true;
    }
    return false;
}