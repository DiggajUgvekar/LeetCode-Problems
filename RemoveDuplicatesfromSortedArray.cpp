class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i, j, k;
        for(i = 0; i < nums.size(); i++){
            for(j = i+1; j < nums.size(); j++){
                if(nums[i] == nums[j]){
                    nums.erase(nums.begin()+j);
                    j = j - 1;
                } 
                else{
                    break;
                }
            }
        }
        k = nums.size();
        return k; 
    }
};