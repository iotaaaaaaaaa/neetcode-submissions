class Solution {
public:
  vector<vector<int>> ans;
  void cac(int i  , vector<int> &cur ,  int target , int sm , vector<int> &nums) {
        if (sm == target) {
            ans.push_back(cur);
            return;
        }

        if (i == nums.size()) return;
    
    
    if (i > nums.size() || sm > target) return;

    cur.push_back(nums[i]);
    cac(i , cur , target , sm + nums[i] , nums);
    cur.pop_back();

    cac(i + 1 , cur , target , sm ,  nums);


  }
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int> cur;
        cac(0 , cur , target , 0 , nums);

        return ans;
    }
};
