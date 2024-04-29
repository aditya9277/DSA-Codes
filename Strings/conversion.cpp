#include<iostream>
#include<vector>
#include<algorithm>
#include<string.h>
using namespace std;


int main(){
    //to uppercase
    char ch[10]="aditya";
    int s=strlen(ch);
    for(int i=0;i<s;i++){
        ch[i]=ch[i]-'a'+'A';

    }
    cout<<ch<<endl;
    //to lowercase
    char ch1[10]="ADITYA";
    int t=strlen(ch1);
    for(int i=0;i<t;i++){
        ch1[i]=ch1[i]-'A'+'a';
    }
    cout<<ch1<<endl;
    //handle mixcase
    char ch2[10]="Aditya";
    int u=strlen(ch2);
    for(int i=0;i<u;i++){
        if(ch2[i]>='a' && ch2[i]<='z')
            ch2[i]=ch2[i]-'a'+'A';
    }
    cout<<ch2;



    return 0;
}