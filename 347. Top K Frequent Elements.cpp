class Solution {
    public:
        vector<int> topKFrequent(vector<int>& nums, int k) {
            unordered_map<int, int> m;
            int len = nums.size();
            for (int i = 0; i < len; i += 1) {
                m[nums[i]] += 1;
            }
            vector<pair<int,int>> count;
            for (auto x : m) {
                count.push_back({x.second, x.first});
            }
            sort(count.begin(), count.end());
            vector<int> output;
            int l = count.size();
            while (k > 0) {
                output.push_back(count[l - 1].second);
                l -= 1;
                k -= 1;
            }
            return output;
        }
    };