class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> s;

        for (int i : asteroids) {
            bool destroyed = false;

            while (!s.empty() && s.back() > 0 && i < 0) {
                if (abs(s.back()) < abs(i)) {
                    // 스택의 소행성이 더 작으면 파괴하고 다음 비교 계속
                    s.pop_back();
                    continue;
                } else if (abs(s.back()) == abs(i)) {
                    // 둘의 크기가 같으면 둘 다 파괴
                    s.pop_back();
                    destroyed = true;
                    break;
                } else {
                    // 현재 소행성(i)이 더 작으면 현재 소행성만 파괴됨
                    destroyed = true;
                    break;
                }
            }

            // 파괴되지 않은 경우에만 스택에 추가
            if (!destroyed) {
                s.push_back(i);
            }
        }
        return s;
    }
};