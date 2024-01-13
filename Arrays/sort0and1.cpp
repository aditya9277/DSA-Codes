#include<iostream>
using namespace std;


int main(){
    int arr[9]={1,0,0,1,1,1,0,1,0};
    int n=9;
    int right=n-1;
    int left=0;
    // for(int i=0;i<=right;i++){
    //     if(arr[i]==0){
    //         swap(arr[left],arr[i]); 
    //         left++;

    //     } 

    //     if(arr[i]==1){
    //         swap(arr[right],arr[i]); 
    //         right--;
    //     }
    // } 

    // }
    int i=0;
    while(left<=right){
        if(arr[i]==0){
            swap(arr[left],arr[i]);
            i++; 
            left++;
        }
        if(arr[i]==1){
            swap(arr[right],arr[i]); 
            right--;
        }  
    }
    for(int i : arr){
        cout<<i<<" ";
    }

    return 0;
}