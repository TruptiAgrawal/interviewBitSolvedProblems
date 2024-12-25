int Solution::solve(vector<int> &A, vector<int> &B, int C) {
    int n = A.size();
    int q = B.size();
    int sum1 = 0 , sum2 = 0 ;
    if(A.size() > 1 && B.size() <= 100000 && C<=1000000000){
    for(size_t i = 0 ; i < A.size() ; i++){
        if(A[i] > C){
            sum1++;
        }
    }
    for(size_t i = 0 ; i < B.size() ; i++){
        if(B[i] < C){
            sum2++;
        }
    }
    }
    if(sum1>sum2){
        return sum1;
    }
    else{
        return sum2;
    }
}
