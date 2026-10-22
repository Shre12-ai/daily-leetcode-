class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        // Clear the lowest set bit of right until right <= left
        while (right > left) {
            right = right & (right - 1);
        }
        // right now holds the common prefix
        return right;
    }
};