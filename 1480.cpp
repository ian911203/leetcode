class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n = nums.size(), total = 0;
        vector<int> res(n);
        
        for(int i = 0; i < n; i++){ // 遍歷 nums
            total += nums[i]; // 累計每個 nums 中的值到 total 中
            res[i] = total; // 將 total 中的值加到 res[i] 中
        }
        return res;
    }
};