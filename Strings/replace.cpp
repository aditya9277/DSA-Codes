#include<iostream>
#include<vector>
#include<algorithm>
#include<string.h>
using namespace std;


int main(){
    char ch[100]="aditya gupta 123";
    int s=strlen(ch);
    for(int i=0;i<s;i++){
        if (ch[i]==' '){
            ch[i]='@';
        }
    }
    cout<<ch;



    return 0;
}
