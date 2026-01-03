class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int temp = 0;
        int result = 0;
        for (int i = 0; i < gain.size(); i++){
            temp +=gain[i];
            result = max(result,temp);
        }
        return result;
    }
};