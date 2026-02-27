#include <bits/stdc++.h>
using namespace std;

vector<long long>solve(vector<long long> &nums)
{
  int n=nums.size();
  unordered_map<long long,vector<long long>> ump;
    for(int i=0;i<n;i++)
    {
        ump[nums[i]].push_back(i);
    }
    vector<long long> result(n,0);
    for(auto it:ump)
    {
        vector<long long> ind=it.second;
        int m=ind.size();
        if(m==1) continue;
        vector<long long> prefix(m,0);
        prefix[0]=ind[0];
        for(int i=1;i<m;i++)
        {
            prefix[i]=prefix[i-1]+ind[i];
        }
        for(int i=0;i<m;i++)
        {
            long long leftSum=0;
            long long rightSum=0;
            if(i>0) leftSum=ind[i]*i-prefix[i-1];
            if(i<m-1) rightSum=prefix[m-1]-prefix[i]-(m-i-1)*ind[i];
            result[ind[i]]=leftSum+rightSum;
        }
    }
    return result;
}

int main() {
    vector<long long> nums = {1, 2, 1, 3, 2};
    vector<long long> result = solve(nums); 
    for (long long val : result) {
        cout << val << " ";
    }
 
    return 0;
}   