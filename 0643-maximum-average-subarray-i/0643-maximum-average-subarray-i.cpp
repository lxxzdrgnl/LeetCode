class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double cur = accumulate(nums.begin(), nums.begin() + k, 0.0);
        double max_sum = cur;

        for (int i = k; i < nums.size(); i++) {
            cur += nums[i] - nums[i - k];
            max_sum = max(max_sum, cur);
        }
        return max_sum/ k;
    }
};