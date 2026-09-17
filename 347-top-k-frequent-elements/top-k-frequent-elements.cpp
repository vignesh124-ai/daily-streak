class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> hash;
        for (int i = 0; i < nums.size(); i++) {
            hash[nums[i]]++;
        }
        vector<pair<int, int>> res;
        for (auto it = hash.begin(); it != hash.end(); it++) {
            res.push_back({it->first, it->second});
        }
        sort(res.begin(), res.end(), [](pair<int, int> a, pair<int, int> b) {
            return a.second > b.second;
        });

        vector<int> res2;
        for (int i = 0; i < k; i++) {
            res2.push_back(res[i].first);
        }

        return res2;
    }
};