class Solution {
public:
    bool isVowels(char s){
        if (s == 'a' || s == 'e' || s == 'i' || s == 'o' || s == 'u') return true;
        else return false;
    }

    int maxVowels(string s, int k) {
        int count = 0;
        int result = 0;
        for (int i = 0; i < k; i++){
            if (isVowels(s[i])){
                count++;
            }
        }

        result = count;

        for (int i = k; i < s.length(); i++){
            if (isVowels(s[i-k])) count--;
            if (isVowels(s[i])) count++;
            result = max(result, count);
        }

        return result;
    }
};