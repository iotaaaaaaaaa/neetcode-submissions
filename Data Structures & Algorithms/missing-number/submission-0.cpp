class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int sm = n * (n + 1) /2;

        int smm = accumulate(nums.begin() , nums.end() , 0);

        return sm - smm;
    }
};
