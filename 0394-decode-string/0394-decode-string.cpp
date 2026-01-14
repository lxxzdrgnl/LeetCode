class Solution {
public:
    string decodeString(string s) {
        stack<int> countStack;  // 반복 횟수
        stack<string> resStack; // 이전까지의 문자열
        string currentRes = ""; // 현재 문자열
        int k = 0;              // 현재 숫자

        for (char c : s) {
            if (isdigit(c)) {
                k = k * 10 + (c - '0');
            } else if (c == '[') {
                countStack.push(k);
                resStack.push(currentRes);

                k = 0;
                currentRes = "";
            } else if (c == ']') {
                // 괄호가 닫히면 반복 횟수를 꺼냄
                int repeatCount = countStack.top();
                countStack.pop();

                string lastString = resStack.top();
                resStack.pop();

                //문자열을 repeatCount만큼 반복
                string temp = "";
                for (int i = 0; i < repeatCount; i++) {
                    temp += currentRes;
                }
                currentRes = lastString + temp;
            } else {
                // 일반 문자인 경우
                currentRes += c;
            }
        }

        return currentRes;
    }
};