#include<iostream>
using namespace std;


int main(){
    int num=526;
    int x=num;
    int reversed1=0;
    int reversed2=0;
    while(x!=0){
        int digit=x%10;
        reversed1=reversed1*10 + digit;
        x/=10;
    }
    int y=reversed1;
    while(y!=0){
        int digit=y%10;
        reversed2=reversed2*10 + digit;
        y/=10;
    }
    cout<<reversed1<<endl;
    cout<<reversed2;
        // if(reversed2==num) return true;
        // else return false;

    return 0;
}