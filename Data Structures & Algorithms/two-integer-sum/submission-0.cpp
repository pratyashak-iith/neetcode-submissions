class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> num;
        for(int i=0;i<nums.size();i++)
        {
            int value= target - nums[i];
            if(num.contains(value))
                return {num[value],i};
            num.insert({nums[i],i});

        }
        return {};
    }
};
