#include<iostream>
#include<vector>
#include<string.h>
#include<algorithm>
using namespace std;

int length(char name[]){
    int length =0;
    int i=0;
    while(name[i]!='\0'){
        length++;
        i++;
    }
    return length;
}
int main(){

    char ch[50];
    cin.getline(ch,50);
    cout<<length(ch);
    cout<<strlen(ch);

    return 0;
} 