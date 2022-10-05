 int mySqrt(long long x) {
        long long mid;
        long long start = 0;
        long long end = x;
        int ans=0;
        while(start <= end){
           mid = (start+end)/2;
        if(mid*mid == x){
           ans = mid;
            break;
        }
        
        else if( mid*mid < x){
            start = mid+1;
             ans = mid;            
        }
        else end = mid-1;
       
    }
        return (int) ans; 
    }
