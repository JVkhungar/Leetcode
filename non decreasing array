class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        int count = 0;
        int k = nums.size()-1;
        for(int i = 0; i<k;i++){
            if(nums[i] > nums[i+1]){
                if(i == 0){
                    count++;
                    nums[i] = nums[i+1];
                }
                else if(i == k-1 && k>2){
                    cout <<"used";
                    count++;
                }
                else {
                    if(nums[i+1] <= nums[i-1]){
                        nums[i+1] = nums[i];
                        cout<<"used"<<i;
                        count++;
                    }
                    else{
                        nums[i] = nums[i+1];
                        cout<<"used"<<i;
                        count++;
                    }
                }
            }
            if(count >= 2){
                
                return false;
            }
        }
        return true;
        
    }
};
