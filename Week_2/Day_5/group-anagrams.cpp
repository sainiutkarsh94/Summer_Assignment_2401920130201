class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;
        for (string s : strs) {
            string key = s;
            sort(key.begin(), key.end());
            mp[key].push_back(s); //////////////key me key var joki sorted word
                                  /// h or value me org s string
        }
        vector<vector<string>> result;
        for (auto& it : mp) // map per iterate kro nd result me value me yaniki
                            // it.second me jo arr bnai use pushkrdo
            result.push_back(it.second); // collect all groups of anagrams

        return result;
    }
};