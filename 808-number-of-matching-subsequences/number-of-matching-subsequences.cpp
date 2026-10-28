
class Solution {
public:
    int numMatchingSubseq(string s, vector<string>& words) {
        vector<vector<int>> pos(26);

        for (int i = 0; i < s.size(); i++) {
            pos[s[i] - 'a'].push_back(i);
        }

        int ans = 0;

        for (auto &word : words) {
            int prev = -1;
            bool found = true;

            for (char ch : word) {
                auto &v = pos[ch - 'a'];
                auto it = upper_bound(v.begin(), v.end(), prev);

                if (it == v.end()) {
                    found = false;
                    break;
                }

                prev = *it;
            }

            if (found) {
                ans++;
            }
        }

        return ans;
    }
};
