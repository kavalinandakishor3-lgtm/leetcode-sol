class Solution {
public:
    void geptar(vector<vector<int>> &ans,vector<int>& can, int tar,int id,int sum,vector<int> &arr){
        if(sum==tar){
            ans.push_back({arr});
            return;
        }
        if(sum > tar || id>=can.size()){
            return;
        }
        arr.push_back(can[id]);
        geptar(ans,can,tar,id,sum+can[id],arr);
        arr.pop_back();
        geptar(ans,can,tar,id+1,sum,arr);
    }
    vector<vector<int>> combinationSum(vector<int>& can, int tar) {
        vector<int> arr;
        vector<vector<int>> ans;
        geptar(ans,can,tar,0,0,arr);
        return ans;
    }
};