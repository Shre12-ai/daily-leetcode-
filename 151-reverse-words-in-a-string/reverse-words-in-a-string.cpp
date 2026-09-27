class Solution {
public:
    string reverseWords(string s) {
        string word;
        string g;
        int n = s.size();

        for(int i = n - 1; i >= 0; i--) {
            if(s[i] == ' ') {
                if(!word.empty()) {
                    reverse(word.begin(), word.end());
                    if(!g.empty())
                        g += " ";
                    g += word;
                    word = "";
                }
            }
            else {
                word += s[i];
            }
        }

        if(!word.empty()) {
            reverse(word.begin(), word.end());
            if(!g.empty())
                g += " ";
            g += word;
        }

        return g;
    }
};