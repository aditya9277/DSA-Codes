#include<bits/stdc++.h>
using namespace std;

int printS(int idx,vector<int> &ds,int s, int sum, int arr[],int n){
    if(idx==n){
        if(!ds.empty()){
            int x=ds.size();
            if(ds[0]+ds[x-1]<=sum){
                return 1;
            }
        }
        return 0;
    }
    ds.push_back(arr[idx]);
    s+=arr[idx];
    int l=printS(idx+1,ds,s,sum,arr,n);
    s-=arr[idx];
    ds.pop_back();
    int r=printS(idx+1,ds,s,sum,arr,n);

    return l+r;
}

int main(){
    int arr[]={3,5,6,7};
    int n=3;
    int sum=9;
    vector<int> ds;
    cout<<printS(0,ds,0,sum,arr,n);



    return 0;
}