//Question:https://practice.geeksforgeeks.org/problems/find-the-position-of-m-th-item1723/1/

class Solution {
  public:
    int findPosition(int N , int M , int K) {
        // code here
        if(M<=N-K+1)
            return M+K-1;
        M=M-(N-K+1);
        return M%N==0? N:M%N;
    }
};
