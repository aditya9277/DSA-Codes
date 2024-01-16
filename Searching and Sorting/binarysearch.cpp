#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int main(){
    //This is binary search, it is more faster than linear search,in this we compare target element to MID value
    //Its Time Complexity is O(logn)
    int n=7;
    int tgt=13;
    int arr[n]={3,6,7,9,12,13,15};
    int start=0;
    int end=n-1;
    while(start<=end){
        int mid=start+ (end-start)/2;
        if(arr[mid]==tgt){
            cout<<"Element found at index "<<mid;
            return 0;
        }
        else if(tgt<arr[mid]){
            //search in left
            end=mid-1;
        }
        else{
            //search in right
            start=mid+1;
    
        }

    }
    cout<<"Element not found";





    return 0;
}