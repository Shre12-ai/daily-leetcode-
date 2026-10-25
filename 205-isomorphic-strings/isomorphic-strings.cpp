class Solution {
public:
    bool isIsomorphic(string s, string t) {
    if(s.size()!=t.size()) return false;
    unordered_map<char,char> mapST;
    unordered_map<char,char> mapTS;
    for(int i=0;i<s.size();i++){
        char ST=s[i]; char TS=t[i];
        if(mapST.count(ST) && mapST[ST]!=TS) return false;
        if(mapTS.count(TS) && mapTS[TS]!=ST) return false;
        mapST[ST]=TS;
        mapTS[TS]=ST;
    }
    return true;
    }
};