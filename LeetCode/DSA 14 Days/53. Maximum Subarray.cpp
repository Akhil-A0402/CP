#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
       int s=0;
        for(int i=0;i<nums.size();i++){
            int subArray = 0;
            for(int j=i;j<nums.size();j++){
                subArray=subArray+nums[i];
                if(subArray>s)
                    s=subArray;
            }
        }
        return s;
    
    }
};

int main(){
    vector<int> testvalues={-2,1,-3,4,-1,2,1,-5,4};
    Solution s1;
    int val = s1.maxSubArray(testvalues);
    cout<<val;
    return 0;
}