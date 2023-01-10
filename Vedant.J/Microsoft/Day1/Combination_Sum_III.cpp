class Solution {
public:
    void combination(int index, int sum, int n, vector<vector<int>> &ans, vector<int> &list, int k)
    {
        if(sum == n && k==0)
        {
            ans.push_back(list);
            return;
        }  
        if(sum>n)
        {
            return;
        }
        for(int i=index; i<=9; i++)
        {
            if(i>n)
            {
                break;
            }
            list.push_back(i);
            combination(i+1, sum+i, n, ans, list, k-1);
            list.pop_back();
        }
    }

    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans;
        vector<int> list;
        combination(1,0, n, ans, list, k);
        return ans;
    }
};
