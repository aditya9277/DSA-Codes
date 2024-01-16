#include<iostream>
#include<algorithm>
using namespace std;


int main(){
    int mat[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    
    for(int i=0;i<3-1-i;i++){
        swap(mat[i],mat[3-1-i]);
    }
    //no need to do temp method, rather  use i+1 in j;
    for(int i=0;i<3;i++){
        for(int j=i+1;j<3;j++){
            // int temp=mat[i][j];
            swap(mat[i][j],mat[j][i]);
            // mat[j][i]=temp;
        }
    }






//printing array
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }





    return 0;
}