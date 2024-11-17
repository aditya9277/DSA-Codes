#include<iostream>
#include<vector>
#include<algorithm>
#include<string.h>
using namespace std;


//parameterised recursion

void param(int i ,int sum){
    if(i<1){
        cout<<sum;
        return;
    }
    param(i-1,sum+i);
}

int functional(int n){
    if(n==0) return 0;

    return n + functional(n-1);
}

int fact(int n){
    if(n==1) return 1;

    return n * fact(n-1);
}

int main(){
    int n;
    cin>>n;

    param(n,0);
    cout<<endl;
    cout<<functional(n);
    cout<<endl;
    cout<<fact(n);




    return 0;
}