class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        map<vector<int>, int> grid_map;
        int n = grid.size();
        int result = 0;

        for (int i = 0; i < n; i++) {
            grid_map[grid[i]]++;
        }

        for (int i = 0; i < n; i++) {
            vector<int> temp;

            for (int j = 0; j < n; j++) {
                temp.push_back(grid[j][i]);
            }
            if (grid_map.find(temp) != grid_map.end() ) result += grid_map[temp];;
        }

        return result;
    }
};