class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> val;
        for(int i=0;i<nums.size();i++)
            val.insert(nums[i]);
        if(nums.size()==val.size()){
            return false;
        }else{
            return true;
        }
    }
};