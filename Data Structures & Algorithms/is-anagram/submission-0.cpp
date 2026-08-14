class Solution {
   public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) {
            return false;
        }
        int c = 0;
        for (int i = 0; i < s.length(); i++) {
            for (int j = 0; j <t.length(); j++) {
                if (s[i] == t[j]) {
                    c++;
                    t[j]='#';
                    break ;
                }
            }
        }
        if (c == s.length()) {
            return true;
        } else
            return false;
    }
};
