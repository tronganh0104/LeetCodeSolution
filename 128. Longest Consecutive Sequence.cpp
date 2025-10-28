class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int len = nums.size();
        if (len <= 1) return len;
        int count = 1;
        int output = 1;
        for (int i = 1; i < len; i += 1) {
            int sub = nums[i] - nums[i - 1];
            if (sub == 1) {
                count += 1;
                output = max(output, count);
            } else if (sub == 0) {
                continue;
            } else {
                count = 1;
            }
        }
        return output;
    }
};