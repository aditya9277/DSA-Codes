#include<iostream>
#include<vector>
#include<algorithm>
#include<string.h>
using namespace std;


int main(){
    // int a=5;
    // int *p = &a;
    // // cout<<*p<<endl;
    // cout<<sizeof(p)<<endl;

    // char c='a';
    // char *ch=&c; 
    // cout<<sizeof(ch);

    int arr[5]={0,1,2,3,4};
    cout<<arr<<endl;
    cout<<&arr<<endl;
    cout<<&arr[0]<<endl;
    int *p= arr;
    cout<<p<<endl;
    cout<<&p<<endl;





    return 0;
}