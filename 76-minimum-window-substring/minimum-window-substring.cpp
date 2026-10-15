class Solution {
public:
    string minWindow(string s, string t) {
        int n=s.size() , m=t.size();
        vector<int> freq(128,0);
        for(char c:t){
            freq[c]++;
        }
        int required=m;
        int minlen=INT_MAX;
        int left=0 , right=0, start=0;
        while(right<n){
            if(freq[s[right]]>0){
                required--;
            }
            freq[s[right]]--;
            right++;
            while(required==0){
                if(right-left<minlen){
                    minlen=right-left;
                    start=left;
                }
                freq[s[left]]++;
                if(freq[s[left]]>0){
                    required++;
                }
                left++;
            }
        }
        return minlen==INT_MAX ? "":s.substr(start,minlen);        
        
    }
};