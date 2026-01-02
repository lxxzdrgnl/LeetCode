class Solution {
public:
    int compress(vector<char>& chars) {
        int write = 0;
        int count = 1;

        for (int i = 1; i <= chars.size(); i++) {
            if (i == chars.size() || chars[i] != chars[i - 1]) {
                chars[write] = chars[i - 1];
                write++;
                if (count > 1) {
                    string s = to_string(count);
                    for (char c : s) {
                        chars[write] = c;
                        write++;
                    }
                }
                count = 1;
            } else {
                count++;
            }
        }
        return write;
    }
};