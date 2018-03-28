class Solution {
public:
    int maxArea(vector<int>& height) {
        int i = 0;
        int j = height.size() - 1;
        int max = 0;
        while( i != j){
            if(height[i]<height[j]){
                int k = (j - i)*height[i];
                if(k>max) max = k;
                i++;
            }
            else{
                int k = (j - i)*height[j];
                if(k>max) max = k;
                j--;
            }
        }
        
        return max;
        
    }
};
