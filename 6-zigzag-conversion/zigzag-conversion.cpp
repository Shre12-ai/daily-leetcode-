class Solution {
public:
    string convert(string s, int numRows) {
        int n=s.size();
        if(n<=numRows||numRows==1) return s;
        int direction=-1 ; int currentrow=0;
        vector<string> rows(numRows);
        for(char c:s){
            rows[currentrow]+=c;
            if(currentrow==0||currentrow==numRows-1)
                   direction*=-1;
            currentrow+=direction;
        }
        string result;
        for(string row:rows){
            result+=row;
        }
        return result;
    }
};