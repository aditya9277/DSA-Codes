#include<iostream>
using namespace std;


int main(){
    int mat[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};

    for(int i=0;i<4;i++){
        for(int j=i;j<3;j++){
            if(i%2==0){
                cout<<mat[j][i]<<" ";
            }
            else{
                cout<<mat[4-1-j][i]<<" ";
            }
        }
        cout<<endl;
    }

    return 0;
}