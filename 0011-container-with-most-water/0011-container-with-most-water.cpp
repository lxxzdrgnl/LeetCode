class Solution {
public:
    int maxArea(vector<int>& height) {
        int pre = 0;
        int fin = height.size() - 1;
        int result = 0;
        while (fin>pre){
            result = max(result, (fin-pre)*min(height[pre],height[fin]));

            if (height[pre] < height[fin]) {
                pre++;
            } else {
                fin--;
            }
        }
        return result;
    }
};