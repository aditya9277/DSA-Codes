#include<iostream>
#include<vector>
using namespace std;


vector<int> main(){
    int n=7;
    int arr[n]={1,3,2,3,1,5,2};
    int count=0;
    vector<int> ans;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n;j++){
            if(arr[j]==i){
                count++;
                }
            }
        if(count>1){
            ans.push_back(i);
            }
        else if(count<=1){
            return {-1};
            }
        }
    cout<<ans;
    return 0;

}