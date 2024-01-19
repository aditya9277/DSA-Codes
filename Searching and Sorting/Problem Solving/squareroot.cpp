#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int main(){
    int n=14;
    int s=1;
    int e=n;
    int ans=0;
    int p=4;
    while(s<=e){
        int mid=s + (e-s)/2;
        if(mid*mid==n){
            ans=mid;
            break;
        } 
        else if(mid*mid>n){
            e=mid-1;
        }
        else{
            ans=mid;
            s=mid+1;
        }
    }
    double pans=ans;
    double step=0.1;
    for(int i=0;i<p;i++){
        for(double j=pans; j*j<=n; j=j+step){
            pans=j;
        }
        step/=10;
    }
    cout<<pans;


    return 0;
}