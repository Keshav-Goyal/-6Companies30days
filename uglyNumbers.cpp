//Question: https://practice.geeksforgeeks.org/problems/ugly-numbers2254/1/

class Solution{
public:	
	// #define ull unsigned long long
	/* Function to get the nth ugly number*/
	ull getNthUglyNo(int n) {
	    // code here
	    if(n==1||n==0)
	    return n;
	   vector<ull>res(1,1);
	   int i=0,j=0,k=0;
	   while(n>1){
	       res.push_back(min(res[i]*2,min(res[j]*3,res[k]*5)));
	       if(res.back()==res[i]*2) i++;
	       if(res.back()==res[j]*3) j++;
	       if(res.back()==res[k]*5) k++;
	       n--;
	   }
	   return res.back();
	}
};
