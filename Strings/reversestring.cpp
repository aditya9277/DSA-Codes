#include<iostream>
#include<vector>
#include<algorithm>
#include<string.h>
using namespace std;


int main(){
    char x[10]="aditya";
    int s=strlen(x);
    int i=0;
    int j=s-1;
    while(i<=j){
        swap(x[i],x[j]);
        i++;
        j--;
    }
    cout<<x;
    return 0;
}