#include<iostream>
using namespace std;


int main(){
    int max=INT8_MIN;
    int arr[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"MAX";
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(arr[i][j]>max) max=arr[i][j];
        }
    }
    cout<<max;
    return 0;
}