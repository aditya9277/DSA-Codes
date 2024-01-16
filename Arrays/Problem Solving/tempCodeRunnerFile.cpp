    for(int i=0;i<3;i++){
        for(int j=i;j<3;j++){
            int temp=mat[i][j];
            mat[i][j]=mat[j][i];
            mat[j][i]=temp;
        }
    }