class Solution {
    unordered_map<int,string> mpp;
    int counter=0;
public:

    // Encodes a URL to a shortened URL.
    string encode(string longUrl) {
        int key=counter++;
        mpp[key]=longUrl;
        return "http://tinyurl.com/"+ to_string(key);      
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        string keystr=shortUrl.substr(shortUrl.find_last_of('/')+1);
        int key=stoi(keystr);
        return mpp[key];
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));