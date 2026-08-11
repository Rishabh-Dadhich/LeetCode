class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int i=0;
        vector <int> nums1;
        while(i<n){
            nums1.push_back(nums[i]);
            nums1.push_back(nums[i+n]);
            i++;
        }
        return nums1;    
    }
};