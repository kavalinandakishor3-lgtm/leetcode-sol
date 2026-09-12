class Solution {
public:
    void getpar(vector<string> &ans,int id,int n,int oc,int cc,vector<char> &arr){
        if(id==2*n){
            ans.push_back(string(arr.begin(),arr.end()));
            return;
        }
        if(oc<n){
            arr[id]='(';
            getpar(ans,id+1,n,oc+1,cc,arr);
        }
        if(cc<oc){
            arr[id]=')';
            getpar(ans,id+1,n,oc,cc+1,arr);
        }

    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        vector<char> arr(2*n);
        getpar(ans,0,n,0,0,arr);
        return ans;
    }
};