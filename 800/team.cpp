#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int ans = 0;
    vector<vector<int>>v;

    for (int i = 0; i < t; i++)
    {
            vector<int>ans;
        for (int j = 0; j < 3; j++)
        {
            int temp ;
            cin>>temp;
            ans.push_back(temp);

        } 
        v.push_back(ans);
    }
    for(auto i:v)
    {
        if(count(i.begin(),i.end(),1) >= 2)
            ans++;

    }
    cout<<ans<<endl;
    return 0;
}