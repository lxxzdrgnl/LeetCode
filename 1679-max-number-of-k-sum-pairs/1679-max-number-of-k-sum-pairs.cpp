class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        unordered_map<int, int> counts;
        int result = 0;

        for (int x : nums) {
            int target = k - x;
            if (counts[target] > 0) {
                result++;
                counts[target]--;
            } else {
                counts[x]++;
            }
        }
        return result;
    }
};