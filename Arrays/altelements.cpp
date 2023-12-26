#include<iostream>
using namespace std;
int main(){
    int n=5;
    int arr[n];
    int x;
    for(int i=0;i<n;i++){
        cin>>x;
        arr[i]=x;
    }
    for(int i=0;i<n;i+=2){
        cout<<arr[i]<<" ";
    }
    return 0;
}