class Solution {
public:
    string reverseWords(string s) {
        vector<string> splited;
        stringstream ss(s);
        string temp;

        while (getline(ss, temp, ' ')){
            if (!temp.empty()) {
                splited.push_back(temp);
            }
        }

        string result = "";
        for (int i = splited.size()-1; i>=0; i--){
            result += splited[i];
            if(i > 0) result += " ";
        }
        return result;
    }
};