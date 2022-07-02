#In this problem we have to find out nth prime Number !
//Input : T (test case) and T number of Integer q
//Output: q'th prime number in a newline.

#include <iostream>
#include <vector>
#define endl '\n';
using namespace std;
/// Here I have taken a vector where I will store all the prime numbers and use them letter.
vector <int> prime{2,3,5,7,11};

int nextPrime = 4;
int lastNum;

int nthTermOfPrime(int n){
/// if our query q'th prime number already exist in our array we will just return the prime number from that position.
  if(n < prime.size())
   return prime[n-1];
// else we will take our last prime number and after adding one we will check again if it's a prime number or not.
  lastNum = prime[prime.size()-1];
  int isPrime;
  while(nextPrime < n){
    step1:
    isPrime = 1;
    lastNum++;
   // as we know every Integer is a prime number or a unique product of two prime numbers, so we will check our lastNum only with our prime numbers in 
   // array if lastNumber is divisible by any of the prime numbers then the number will not be a prime number so we just jump to the step1 else add the 
    // new prime number in our array .
    
    for(int i = 0; i < prime.size();i++){
      if(!(lastNum%prime[i])){
        isPrime = 0;
        goto step1;
      }
    }
    
    if(isPrime) {prime.push_back(lastNum);nextPrime++;}
  }
  // finnaly we return our expected result .........
  return prime[n-1];
}

int main() {
 int n,x;
  cin >> n;
  while(n--){
    cin >> x;
    cout << nthTermOfPrime(x) << endl;
  }
  return 0;
}
