#include<iostream>
#include<vector>
#include<algorithm>
#include<string.h>
using namespace std;


int main(){
    // string str;
    // getline(cin,str);
    // cout<<str;
    // cout<<str.length()<<endl;
    // cout<<str.empty()<<endl;
    // str.push_back('A');
    // cout<<str.substr(0,3);
    //substr format (index, range/count)
    // string a="adi"; 
    // string b="adi";
    // if(a.compare(b)==0){
    //     cout<<"equal strings";
    // }

    //if compare == 0 - both strings are equal
    //if compare !=0 - strings are different
    string a="aditya gupta is best"; 
    string target="xx";
    cout<<a.find(target)<<endl; //returns first index of the the tagret string
    if(a.find(target)==string::npos){
        cout<<"Not found";
    }









    return 0;
}