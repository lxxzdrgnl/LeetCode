class Solution {
public:
    bool isSubsequence(string s, string t) {
        if (s==""){
            return true;
        }
        int pointer = 0;
        for (char c : t){
            if (c == s[pointer]){
                pointer++;
                if (s.length() == pointer){
                    return true;
                }
            }
        }
        return false;
    }
};