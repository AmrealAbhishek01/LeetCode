class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {

        int m = nums1.size();  //2
        int n = nums2.size();  //1
        int i=0,j=0,k=0;
        vector<int> nums3(m + n);
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
        // for(int p=0;p<n;p++){
        //     cout<<nums3[p]<<" ";

        // }
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