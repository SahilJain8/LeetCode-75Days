class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int rightSum = accumulate(nums.begin(), nums.end(), 0);
       
        int leftSum = 0;
      
        for (int idx = 0; idx < nums.size(); idx++) {
          
            rightSum -= nums[idx];
 
            if (leftSum == rightSum)
                return idx;    
           
            leftSum += nums[idx];
        }
        return -1;    
    }
        
          
};



// Input: nums = [1,7,3,6,5,6]
// Output: 3
// Explanation:
// The pivot index is 3.
// Left sum = nums[0] + nums[1] + nums[2] = 1 + 7 + 3 = 11
// Right sum = nums[4] + nums[5] = 5 + 6 = 11
