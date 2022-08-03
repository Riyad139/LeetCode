# Problem link https://leetcode.com/problems/house-robber/

solved with dynamic programming.


 int rob(vector<int>& v) {
  if(v.size() == 0) return 0;
 
  if(v.size()==1) return v[0];
  
  if(v.size() < 2) return max(v[0],v[1]);
  
  int first = v[0];
  
  int second = max(v[0],v[1]);
  
  int curr = second;
  
  for(int i = 2; i < v.size(); i++){
      
      curr = max(second,first+v[i]);
      
      first = second;
      
      second = curr;
     }
   
   return curr;
 }
