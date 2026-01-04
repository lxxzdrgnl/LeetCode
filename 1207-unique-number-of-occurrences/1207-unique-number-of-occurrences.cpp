class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> counts;
        for (int n : arr) {
            counts[n]++;
        }

        unordered_set<int> occurrences;
        for (auto const& [key, val] : counts) {
            if (occurrences.find(val) != occurrences.end()) {
                return false;
            }
            occurrences.insert(val);
        }

        return true;
    }
};