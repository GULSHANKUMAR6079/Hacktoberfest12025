class Solution {
public:
     void combination(int i,int t,vector<int>& arr,vector<vector<int>>& ans,vector<int>& ds){
        if(t==0){
            ans.push_back(ds);
            return;
        }
        for(int x=i;x<arr.size();x++){
            if(x>i && arr[x]==arr[x-1])continue;
            if(arr[x]>t)break;
            ds.push_back(arr[x]);
            combination(x+1,t-arr[x],arr,ans,ds);
            ds.pop_back();
        }
     }
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<int>ds;
        vector<vector<int>>ans;
        combination(0,target,candidates,ans,ds);
        return ans;
    }
};
