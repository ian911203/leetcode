class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int res = 0;
        
        for(auto str : operations){ // 遍歷整個 operations
            if(str == "--X" || str == "X--") // str 為 --X 或 X-- 時, res--
                res--;
            if(str == "++X" || str == "X++") // str 為 ++X 或 X++ 時, res++
                res++;
        }
        return res;
    }
};