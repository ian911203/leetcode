class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int len(nums.size()); // 先設 len 來儲存 nums 原始長度
        
        for(int i = 0; i < len; i++){
            nums.push_back(nums[i]); // 直接將值加在 nums 後面
        }
        return nums;
    }
};