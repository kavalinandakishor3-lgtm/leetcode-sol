class Solution {
public:
    void sub(vector<vector<int>> &ans,vector<int>& nums,int id,vector<int> &arr){
        if(id==nums.size()){
            ans.push_back({arr});
            return;
        }
        
            arr.push_back(nums[id]);
            sub(ans,nums,id+1,arr);
            arr.pop_back();
            sub(ans,nums,id+1,arr);
            
        

    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> arr;
        sub(ans,nums,0,arr);
        return ans;
    }
};