class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {

        // sort(nums.begin(),nums.end());
        // for(int i=0;i<nums.size()-1;i++){
        // if(nums[i]==nums[i+1]){return true;}
        // }return false;

        unordered_set<int> mySet;
        for (int i : nums)
        {
            if (mySet.find(i) != mySet.end())
            {
                return true; // Duplicate found
            }
            mySet.insert(i);
        }
        return false; // No duplicates
    }
};
