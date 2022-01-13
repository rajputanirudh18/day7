class Solution {
public:
    void subsetsHelper(vector<int> nums,vector<vector<int>>& ans,vector<int>& ds){
        
        if(nums.size()==0){
            ans.push_back(ds);
            return;
        }
       vector<int> op1=ds;
       vector<int> op2=ds;
        op2.push_back(nums[0]);
        nums.erase(nums.begin()+0);
        subsetsHelper(nums,ans,op1);
        subsetsHelper(nums,ans,op2);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        
        
          vector<int> ds;
        vector<vector<int>> ans;
        subsetsHelper(nums,ans,ds);
        return ans;
    }
};