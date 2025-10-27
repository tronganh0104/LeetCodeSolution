class Solution {
    public:
        vector<vector<string>> groupAnagrams(vector<string>& strs) {
            int len = strs.size();
            if (len <= 1) return {strs};
            unordered_map<string, vector<string>> temp;
            for (int i = 0; i < len; i += 1) {
                string s = strs[i];
                sort(s.begin(), s.end());
                temp[s].push_back(strs[i]);
            }
            vector<vector<string>> output;
            for (auto a : temp) {
                output.push_back(a.second);
            }
            return output;
        }
    };