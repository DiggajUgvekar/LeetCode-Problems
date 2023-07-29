class Solution {
public:
    bool isPalindrome(int x) {
        int i,j,len;
        string num = to_string(x);

        for(i=0;num[i]!='\0';++i)
	    {
	        len++;
	    }
        
        if(len == 1){
            return true;
        }
        else if(x < 0){
            return false;
        }
        else{
            int mid = (0 + len-1)/2;
            for(i = 0; i <= mid; i++){
                if(num[i] == num[len-1-i]){
                    continue;
                }
                else{
                    return false;
                }
            }
        return true;
        }
    }
};