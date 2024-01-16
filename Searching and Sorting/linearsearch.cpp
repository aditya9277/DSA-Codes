#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int main(){
    int arr[5]={3,1,5,6,7};
    for(int i:arr){
        if(arr[i]==6) cout<<"element found at "<<i;
    }
    //This is linear search, its TC is O(n).




    return 0;
}