int Solution::solve(vector<int> &A) {
    int count  = 1 ;
    int maxi = A[0];
    for(size_t i = 1 ; i < A.size(); i++){
        if(A[i] > maxi){
            count++;
            maxi = A[i];
        }
    }
    return count;
}
