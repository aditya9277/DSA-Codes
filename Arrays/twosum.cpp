#include<iostream>
using namespace std;


int main(){
    int arr[4]={3,5,2,1};
    int target=3;
    int n=sizeof(arr);
    for(int i=0;i<n;i++){
        int x=i+1;
        if(arr[i] + arr[x]==target){
            cout<<i<<" "<<x;
        }
    }
}