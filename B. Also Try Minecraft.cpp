#include <bits/stdc++.h>
#define pb push_back
#define ll long long int

using namespace std;

int main() {
  
  int n , t,prevNum,currNum;
  
  cin >> n >> t;
  
  vector<ll>pre;
  
  pre.pb(0);
  
  vector<ll>suf;
  
  suf.pb(0);
  
  cin >> prevNum;
  
  for(int i = 1; i < n;i++){
    
    cin >> currNum;
    
    if(prevNum >= currNum) pre.pb(prevNum - currNum + pre[i-1]);
    
    else pre.pb(pre[i-1]);
    
    if(prevNum <= currNum) suf.pb(currNum - prevNum + suf[i-1]);
    
    else suf.pb(suf[i-1]);
   
    prevNum = currNum;    
  
  }
  int s1,s2;
  
  while(t--){
    
    cin >> s1 >> s2;
    
    if(s1 < s2) cout << pre[s2-1]-pre[s1-1] << endl;
    
    else if(s1 > s2) cout << suf[s1-1]-suf[s2-1] << endl;
    
    else cout << 0 << endl;
  }
  
  return 0;
}
