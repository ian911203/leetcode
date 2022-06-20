class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n,0); // 0 可有可無, vector<int> 預設是填入 0
        
        for(int i=0; i<n; i++)
            ans[i] = nums[nums[i]]; // 依照題目要求 ans[i] = nums[nums[i]]
        
        return ans;
    }
};