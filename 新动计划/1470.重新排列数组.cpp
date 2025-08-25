class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans(2*n);
        for(int i=0;i<2*n;i++){
            if(i%2)
            ans[i]=nums[n+(i+1)/2-1];
            else
            ans[i]=nums[i/2];
        }
        return ans;
    }
};