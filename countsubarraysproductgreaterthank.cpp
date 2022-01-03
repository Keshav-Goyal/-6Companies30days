//Qution:https://practice.geeksforgeeks.org/problems/count-the-subarrays-having-product-less-than-k1708/1/

class Solution{
  public:
    int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        int i=0,j=0,res=0;
        long long p=1;
        for(int i=0,j=0;j<n;++j){
            p*=a[j];
            while(i<j && p>=k){
                p/=a[i++];
            }
            if(p<k)
                res+=j-i+1;
        }
        return res;
    }
};
