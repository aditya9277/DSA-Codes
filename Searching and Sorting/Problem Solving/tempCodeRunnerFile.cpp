    while(s<=e){
        int mid=s + (e-s)/2;
        if(mid*mid==n){
            ans=mid;
            break;
        } 
        else if(mid*mid>n){
            e=mid-1;
        }
        else{
            ans=mid;
            s=mid+1;
        }
    }