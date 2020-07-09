// Function to merge three sorted arrays
// A, B, and C: input sorted arrays
vector<int> mergeThree(vector<int>& A, vector<int>& B, vector<int>& C) 
{ 
    int l,m,n,i,j,k;
    l=A.size();i=0;
    m=B.size();j=0;
    n=C.size();k=0;
    vector<int> res;
    int temp;
    
    //taking three arrays at a time
    while(i<l && j<m && k<n){
        temp=min(min(A[i],B[j]),C[k]);
        res.push_back(temp);
        if(temp==A[i])
            i++;
        else if(temp==B[j])
            j++;
        else
            k++;
    }
    //C is exhausted
    while(i<l && j<m){
        if(A[i]<=B[j]){
            res.push_back(A[i]);
            i++;
        }
        else{
            res.push_back(B[j]);
            j++;
        }
    }
    //B is exhausted
    while(i<l && k<n){
        if(A[i]<=C[k]){
            res.push_back(A[i]);
            i++;
        }
        else{
            res.push_back(C[k]);
            k++;
        }
    }
    //A is exhausted
    while(k<n && j<m){
        if(C[k]<=B[j]){
            res.push_back(C[k]);
            k++;
        }
        else{
            res.push_back(B[j]);
            j++;
        }
    }
    //A is not exhausted
    while(i<l){
        res.push_back(A[i]);
        i++;
    }
    //B is not exhausted
    while(j<m){
        res.push_back(B[j]);
        j++;
    }
    //C is not exhausted
    while(k<n){
        res.push_back(C[k]);
        k++;
    }
    return res;
} 
