#include<iostream>
#include<vector>
#include<algorithm>
#include<string.h>
using namespace std;

void func(int i, int n){
    if(i<1) return;

    cout<<i;
    func(i-1,n);


}

int main(){
    int n;
    cin>>n;
    
    func(n,n);





    return 0;
}