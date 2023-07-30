class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int i,max;
        vector<bool> result;
        max = 0;
        for(i = 1; i < candies.size(); i++){
            if(candies[i] > candies[max]){
                max = i;
            }
        }

        for(i = 0; i < candies.size(); i++){
            if((candies[i] + extraCandies) >= candies[max]){
                result.push_back(true);
            }
            else{
                result.push_back(false);
            }
        }
        return result;
    }
};