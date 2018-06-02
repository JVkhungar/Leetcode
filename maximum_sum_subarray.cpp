class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0;
        int prv = -2147483647;
        int max = 0;
        for(int i = 0;i<nums.size();i++){
            if(sum >= 0){
                sum = sum + nums[i];
                
            }
                if(sum>max){
                   
                    max = sum;
            }
            if(sum <0){
                sum = 0;
            }
            if(nums[i] > prv)
                prv = nums[i];
             
        }
        if(max == 0){
            return prv;
        }
        return max;
    }
};//O(N) 
