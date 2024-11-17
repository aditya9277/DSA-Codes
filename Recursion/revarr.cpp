#include<iostream>
#include<vector>
#include<algorithm>
#include<string.h>
using namespace std;


void revarr(int arr[],int i, int n){

    if(i>=n) return;
    swap(arr[i], arr[n]); // swap(arr[i],arr[n-i-1]);
    revarr(arr, i+1,n-1);
}
int main(){
    int arr[5]={1,2,3,4,5};
    int n=5;

    revarr(arr,0,n-1);
    for(int i: arr) cout<<i<<" ";






    return 0;
}