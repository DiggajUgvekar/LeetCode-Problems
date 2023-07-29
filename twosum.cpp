class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i, j;
        vector<int> vect;
  
    
        int len = nums.size();
        for(i = 0; i < len-1; i++){
            for(j = 1+i; j < len; j++){
                if((nums[i]+nums[j]) == target){
                    vect.push_back(i);
                    vect.push_back(j);
                    return vect;
                }
            }
        }
        return vect;
    }
};