#include<bits/stdc++.h>
using namespace std;

int partition(vector<int> &arr,int low,int high){
    int pivot = arr[low];
    int i=low, j=high;
    while(i<j){
        while(arr[i]<=pivot && i<high){
            i++;
        }
        while(arr[j]>pivot && j>low){
            j--;
        }
        if(i<j){
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[low],arr[j]);
    return j;
}

void qs(vector<int> &arr,int low, int high){
    if(low<high){
        int partitionidx=partition(arr,low,high);
        qs(arr,low,partitionidx-1);
        qs(arr,partitionidx+1,high);
    }
}

int main(){
    vector<int> arr={4,7,11,3,1,9,2,6,8,5};
    int n=arr.size();
    qs(arr,0,n-1);

    for(int i: arr){
        cout<<i<<" ";
    }
    return 0;
}