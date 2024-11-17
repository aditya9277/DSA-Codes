#include<iostream>
#include<vector>
#include<algorithm>
#include<string.h>
using namespace std;


bool check(string str, int i,int n){
    if(i>=n/2) return true;

    if(str[i]!=str[n-i-1]){
        return false;
    }
    return check(str, i+1, n);
    
}

int main(){
    string str="boob";
    int n=str.length();

    cout<<check(str,0, n);

    return 0;
}