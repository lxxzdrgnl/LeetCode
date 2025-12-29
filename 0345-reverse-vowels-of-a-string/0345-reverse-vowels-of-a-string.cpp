class Solution {
public:
    string reverseVowels(string s) {
        string chars = "aeiouAEIOU";
        vector<char> vowels;
        vector<int> index;

        for (int i =0; i < s.length(); i++){
            if(chars.find(s[i]) != string::npos ){
                vowels.push_back(s[i]);
                index.push_back(i);
            }
        }
        
        int n = vowels.size();
        for (int i = 0; i < n; i++) {
            s[index[i]] = vowels[n-1-i];
        }

        return s;
    }
};