#include<iostream>
#include<vector>
#include<algorithm>
#include<string.h>
using namespace std;


int main(){
    char ch[10];
    cin>>ch;
    int s=strlen(ch);
    int i=0;
    int j=s-1;
    bool flag=false;
    while(i<=j){
        if(ch[i]==ch[j]){
            flag=true;
        }
        else flag=false;
        i++;
        j--;
    }

    if(flag) cout<<"Yes";
    else cout<<"No";

    return 0;
}