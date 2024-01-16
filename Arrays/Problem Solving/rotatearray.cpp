#include<iostream>
#include<vector>
using namespace std;


int main(){
    int nums[7]={1,2,3,4,5,6,7};
    int k=3;

    int ans[7];
    int n=7;
    int i=0;
    int x=1;
    while(x<=k){
        ans[i]=nums[n-1-i-x];
        i++;
        x++;
    }
    for(int i=0;i<7;i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}