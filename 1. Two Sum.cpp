class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
            vector<pair<int,int>> A;
            int len = nums.size();
            for (int i = 0; i < len; i += 1) {
                A.push_back({nums[i], i});
            }
            sort(A.begin(), A.end());
            int i = 0;
            int j = len - 1;
            while (i < j) {
                int sum = A[i].first + A[j].first;
                if (sum == target) {
                    return {min(A[i].second, A[j].second), max(A[i].second, A[j].second)};
                } else if (sum > target) {
                    j -= 1;
                } else {
                    i += 1;
                }
            }
            return {};
        }
    };