#include<iostream>
#include<vector>
using namespace std;

int main() {
    int arr[7] = {1, 5, 3, 4, 3, 5, 6};
    int n = 7;
    vector<int> count(n, 0);

    for (int i = 0; i < n; i++) {
        count[arr[i]]++;
    }

    for (int i = 0; i < n; i++) {
        if (count[arr[i]] > 1) {
            cout << i;
            break;
        }
    }

    return 0;
}
