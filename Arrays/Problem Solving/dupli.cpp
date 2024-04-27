#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int main(){
    int arr[5]={3,4,5,3,5};
    vector<int> count(6,0);
    for(int element : arr){
        count[arr[element]]++;
    }
    for(int i=0;i<count.size();i++){
        if(count[i]==1){
            cout<<count[i];
        }
    }
    return 0;
}