class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int front = 0;
        int stack = 0;
        for (int i = 0; i < nums.size(); i++){
            if (nums[i] == 0){
                stack++;
            }else {
                nums[front++] = nums[i];
            }
        }
        for (int i = (nums.size()-1); i > (nums.size()-1-stack); i--){
            nums[i] = 0;
        }
    }
};