// class Solution {
// public:
//     int removeDuplicates(vector<int>& nums) {
//         vector<int> values;
//         int count=0;
//         values.push_back(nums[count]);
//         count++;
//         for(int i=1;i<nums.size();i++){
//             if(nums[i]!=values[count-1] && count!=0){
//                 values.push_back(nums[i]);
//                 count++;
//             }
//         }
//         for(int i=0;i<nums.size();i++){
//             if(i<count){
//                 nums[i]=values[i];
//             }else{
//                 break;
//             }
//         }
//         return count;
//     }
// };

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int pos=0;
        for(int i=1;i<nums.size();i++){
            if(nums[pos]==nums[i])
                continue;
            else
                nums[++pos]=nums[i];
        }
        return pos+1;
    }
};