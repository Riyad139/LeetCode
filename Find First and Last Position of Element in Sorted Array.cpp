# https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/

vector<int> searchRange(vector<int>& nums, int target) {
        if(nums.size() == 1 && nums[0] == target){
            vector<int>v{0,0};
            return v;
        }
        int low = 0;
        int high = nums.size()-1;
        
        int found = -1;
        
        while(low <= high){
            
            int mid = (low+high)/2;
            
            if(nums[mid] == target){
                found = mid;
                break;
            }
            else if(nums[mid] > target) high = mid-1;
            else low = mid+1;
        
         }
        vector<int>v{-1,-1};
        if(found!=-1){
            int first = found , last = found ;
            while(true){
                if( first-1 > -1 and nums[first-1] == target) first--;
                else if( last+1 < nums.size() and nums[last+1] == target) last++;
                else break;
            }
            v[0] = first;
            v[1] = last;
        }
        return v;
    }
