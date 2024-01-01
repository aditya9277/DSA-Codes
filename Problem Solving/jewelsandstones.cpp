#include<iostream>
using namespace std;


int main(){
    string jewels="Aa";
    string stones="AAabb";
    string word="";
        int count=0;
        for(int i=0;i<jewels.length();i++){
            for(int j=0;j<stones.length();j++){
                cout<<jewels[i]<<" "<<stones[j];
            }
        }
    return 0;
}