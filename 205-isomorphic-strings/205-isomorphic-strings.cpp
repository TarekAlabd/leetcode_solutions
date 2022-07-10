class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> replacements;
        unordered_map<char, bool> used;
        for (int i=0; i<s.length(); i++) {
            if (replacements.count(s[i])) {
                if (replacements[s[i]] != t[i]) {
                    return false;
                }
            } else {
                if (used[t[i]]) {
                    return false;
                }
                replacements[s[i]] = t[i];
                used[t[i]] = true;
            }
        }
        return true;
    }
};