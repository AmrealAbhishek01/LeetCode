
// Kadane's Algorithm for Maximum Subarray Sum (Dynamic Programming)
// Time Complexity: O(n) Space Complexity: O(1)  (Optimized)
// Time Complexity: O(n) Space Complexity: O(n)  (Brute Force)

class Solution {
public:
    int maxSubArray(vector<int>& nums) {     // Nums = [-2,1,-3,4,-1,2,1,-5,4]
        int maxsum=nums[0];             // Initially maxsum = -2
        int currsum=0;                  // Initially currsum = 0
        for(int i=0;i<nums.size();i++){
            currsum=currsum+nums[i];  // currsum = -2, -1, -4, 0, 4, 3, 5, 6, 1
                                     //Here we are adding the elements of the array one by one
            if(currsum>maxsum){
                maxsum=currsum;  // if currsum is greater than maxsum then we will update maxsum
            }
            if(currsum<0){
                currsum=0;  // if currsum is negative then we will not add it to the next element
            }
            
        }
        return maxsum;      // Finally we will return maxsum
        
    }
};