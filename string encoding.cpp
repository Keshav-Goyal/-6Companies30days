//Question:https://practice.geeksforgeeks.org/problems/run-length-encoding/1/

string encode(string src)
{     
  //Your code here 
  int count=1;
  string res="";
  for(int i=0;i<src.size()-1;++i ){
      if(src[i]==src[i+1]){
          count++;
      }else{
          res+=src[i]+to_string(count);
          count=1;
      }
  }
    res+=src.back()+to_string(count);
    return res;
      
}     
