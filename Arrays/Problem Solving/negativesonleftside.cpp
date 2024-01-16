#include<iostream>
using namespace std;


int main(){
    int arr[5]={1,-4,3,2,-2};
    int n=5;
    // for(int i=0;i<n;i++){
    //     for(int j=n-1;j!=i;j--){
    //         if(arr[i]>0) swap(arr[i],arr[j]);
    //     }
    // }
    int l=0;
    int h=n-1;
    while(l!=h){
        if(arr[l]<0) l++;

        else if(arr[h]>0) h--;

        else swap(arr[l],arr[h]);
    }
    for(int i:arr){
        cout<<i<<" ";
    }




    return 0;
}