#include<iostream>
#include<vector>
#include<algorithm>
#include<string.h>
using namespace std;

void printarr(int arr[],int n){
    if(n==0) return;
    cout<<*arr<<" ";
    printarr(arr+1,n-1);
}
int main(){
    int arr[4]={1,2,3,4};
    printarr(arr, 4);
    return 0;
}