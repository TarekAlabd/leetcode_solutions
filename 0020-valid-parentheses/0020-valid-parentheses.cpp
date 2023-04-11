class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for (auto item:s) {
            if (item == '(' || item == '{' || item == '[') {
                st.push(item);
            } else {
                if (st.empty()) {
                    return false;
                } else if (item == ')' && st.top() != '(') {
                    return false;
                } else if (item == '}' && st.top() != '{') {
                    return false;
                } else if (item == ']' && st.top() != '[') {
                    return false;
                } else {
                    st.pop();
                }
            }
        }
        if (st.empty()) {
            return true;
        }
        return false;
    }
};