class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        int left = 0;
        int right = 0;

        for (int i : nums) right += i;

        for (int pivot = 0; pivot < n; pivot++) {
            right -= nums[pivot];
            if (left == right) {
                return pivot;
            }
            left += nums[pivot];
        }
        
        return -1;
    }
};