
// Kadane's Algorithm for Maximum Subarray Sum (Dynamic Programming)
// Time Complexity: O(n) Space Complexity: O(1)  (Optimized)
// Time Complexity: O(n) Space Complexity: O(n)  (Brute Force) 


class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {

        int m = nums1.size();  // Length = 2
        int n = nums2.size();  //Length = 1
        int i=0,j=0,k=0;  // 
        vector<int> nums3(m + n); // Create a vector of size (nums1 + nums2)
        while (i<m && j <n)   //By bruteforce Algorithm
        {
            if (nums1[i] < nums2[j]){
                nums3[k++] = nums1[i++];
            }  
            else{
                nums3[k++] = nums2[j++];
            }
        }
        while (i < m){
            nums3[k++] = nums1[i++];
        }
        while (j < n){
            nums3[k++] = nums2[j++];
        }
        int total=(m+n);
        double median=0.0;
        if(total%2==0){
            median=(nums3[total/2 -1] + nums3[total/2]) /2.0;
        }
        else{
            median=nums3[total/2];
        }
        return median;
        
    }
    
};
hello 