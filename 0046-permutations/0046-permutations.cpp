class Solution {
public:
    void getpre(vector<int>& nums,int id,vector<vector<int>> &ans){
        if(id==nums.size()){
            ans.push_back({nums});
            return;
        }
        for(int i=id;i<nums.size();i++){
            swap(nums[i],nums[id]);
            getpre(nums,id+1,ans);
            swap(nums[i],nums[id]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        getpre(nums,0,ans);
        return ans;
    }
};