class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int stack = 0; 
        int front = 0;
        int result = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (!nums[i]) {
                stack++;
            }

            while (stack > k) {
                if (!nums[front]) {
                    stack--;
                }
                front++;
            }

            int cur = i - front + 1;
            result = max(result, cur);
        }
        return result;
    }
};