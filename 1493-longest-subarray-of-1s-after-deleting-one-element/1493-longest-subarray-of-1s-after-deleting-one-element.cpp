class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int front = 0;
        int zeroCount = 0;
        int result = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) {
                zeroCount++;
            }

            while (zeroCount > 1) {
                if (nums[front] == 0) {
                    zeroCount--;
                }
                front++;
            }

            result = max(result, i - front);
        }

        return result;
    }
};