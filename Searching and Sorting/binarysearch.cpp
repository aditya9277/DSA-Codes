#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int main(){
    int n=8;
    int tgt=13;
    int arr[n]={3,6,7,9,11,12,13,15};
    int start=0;
    int end=n-1;
    while(start<=end){
        int mid=(start+end)/2;
        if(arr[mid]==tgt){
            cout<<"Element found at index "<<mid;
            return 0;
        }
        else if(tgt<arr[mid]){
            end=mid-1;
        }
        else{
            start=mid+1;
    
        }

    }
    cout<<"Element not found";





    return 0;
}