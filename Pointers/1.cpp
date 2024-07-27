#include<iostream>
#include<vector>
#include<algorithm>
#include<string.h>
using namespace std;


int main(){
    int a=5;
    int *p = &a;
    // cout<<*p<<endl;
    cout<<sizeof(p)<<endl;

    char c='a';
    char *ch=&c; 
    cout<<sizeof(ch);



    return 0;
}