class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int i,j,k = 0;
        vector<int> ans;

        for(i = 0; i < nums.size(); i++){
            if(i % 2 == 0 ){
                ans.push_back(nums[i/2]);
            }
            else{
                ans.push_back(nums[n+k]);
                k++;
            }
        }
        return ans;
    }
};