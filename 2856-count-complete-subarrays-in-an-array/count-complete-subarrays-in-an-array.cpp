class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        int n = nums.size();

        // Number of distinct elements in the entire array
        unordered_set<int> distinct(nums.begin(), nums.end());
        int total = distinct.size();

        unordered_map<int, int> freq;
        int left = 0;
        int count = 0;
        int have = 0;

        for (int right = 0; right < n; right++) {
            if (freq[nums[right]] == 0)
                have++;

            freq[nums[right]]++;

            // Window is complete
            while (have == total) {
                // Every subarray starting from left' <= left
                // and ending at right is also complete
                count += n - right;

                freq[nums[left]]--;

                if (freq[nums[left]] == 0)
                    have--;

                left++;
            }
        }

        return count;
    }
};