#include<bits/stdc++.h>
using namespace std;

int maxSubarrayLength(vector<int>& nums, int k) {
        int i =0;

        vector<int>v;

        int count ;

        while(i < nums.size())
        {
            count = 0;
            unordered_map<int,int>m;
           for(int j = i; j < nums.size();j++)
           {
                count++;
                m[nums[j]]++;
                if(count==nums.size()+1){
                    v.push_back(count-1);
                    break;
                }
                if(m[nums[j]] > k)
                {
                    v.push_back(count-1);

                    for(auto i : v)
                        cout<<i<<" ";
                    cout<<endl;

                    i = j+1;
                    break;
                }
                else
                    i++;
           }

        }
        int ans = *max_element(v.begin(), v.end());
        if(ans == 0)
        {
            ans = nums.size();
        }
        return ans;

    }

int main()
{
    vector<int>v = {1,3,2,5};
    int ans= maxSubarrayLength(v,1);
    cout<<ans<<endl;


    return 0;
}