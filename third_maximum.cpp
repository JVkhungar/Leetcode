class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long int max1 = -9223372036854775807;
        long int max2 = -9223372036854775807;
        long int max3 = -9223372036854775807;
        for(int i = 0;i<nums.size();i++){
            if(nums[i]>max1){
                max3 = max2;
                max2 = max1;
                max1 = nums[i];
            }
            else if(nums[i] < max1 && nums[i] > max2){
                max3 = max2;
                max2 = nums[i];
            }
            else if(nums[i] <max2 && nums[i] > max3){
                max3 = nums[i];
            }
            else
                continue;
        }
        
        if(nums.size() < 3 || max3 == -9223372036854775807)
            return max1;
    
        if(max3 != max2)
            return max3;
        else
            return max1;
    }
};
