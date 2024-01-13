#include<iostream>
using namespace std;


int main(){
    int arr[8]={4,5,3,4,6,3,9,7};
    int n=8;

    for(int i=0;i<n-1-i;i++){
        swap(arr[i],arr[n-1-i]);
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}