#include<bits/stdc++.h>
using namespace std;

bool printS(int idx,vector<int> &ds,int s, int sum, int arr[],int n){
    if(idx==n){

        if(s==sum){
            for(auto i:ds) cout<<i<<" ";
            cout<<endl;
            return true;
        }
        return false;
    }
    ds.push_back(arr[idx]);
    s+=arr[idx];
    if(printS(idx+1,ds,s,sum,arr,n)==true) return true;
    s-=arr[idx];
    ds.pop_back();
    if(printS(idx+1,ds,s,sum,arr,n)==true) return true;

    return false;
}

int main(){
    int arr[]={1,2,1};
    int n=3;
    int sum=2;
    vector<int> ds;
    printS(0,ds,0,sum,arr,n);



    return 0;
}