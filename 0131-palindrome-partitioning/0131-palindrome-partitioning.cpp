class Solution {
public:
    bool ispalin(string s,int l,int r){
        while(l<r){
            if(s[l]!=s[r])
                return false;
            l++;
            r--;
        }
        return true;
    }
    void palin(vector<vector<string>> &ans,int id,string s,vector<string> &arr){
        if(id==s.size()){
            ans.push_back({arr});
            return;
        }
        for(int i=id;i<s.size();i++){
            if(ispalin(s,id,i)){
                arr.push_back(s.substr(id,i-id+1));
                palin(ans,i+1,s,arr);
                arr.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> arr;
        palin(ans,0,s,arr);
        return ans;
    }
};