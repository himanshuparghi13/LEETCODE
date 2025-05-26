class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        if (k == nums.size())
            return nums;
        unordered_map<int, int> mp;
        for (int i = 0; i < nums.size(); i++) {
            mp[nums[i]]++;
        }
        std::priority_queue<std::pair<int, int>,
                            std::vector<std::pair<int, int>>,
                            std::greater<std::pair<int, int>>>
            hp;

        for (auto i : mp) {
            if (hp.size() == k) {
                if (hp.top().first < i.second) {
                    hp.pop();
                    hp.push({i.second, i.first});
                }
            } else {
                hp.push({i.second, i.first});
            }
        }
        vector<int> v;
        while (!hp.empty()) {
            v.push_back(hp.top().second);
            hp.pop();
        }

        return v;
    }
};