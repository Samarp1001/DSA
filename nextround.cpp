// https://codeforces.com/problemset/problem/158/A

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    vector<int>v;
    int temp;

    for(int i = 0; i < n; i++)
    {
        cin>>temp;
        v.push_back(temp);
    }
    int ans = 0;
    temp = v[k];
    for(int i =0; i <= k; i++)
    {
        if(v[i] > 0 && v[i] >= v[k])
            ans++;
    }
    cout<<ans<<endl;

    
    return 0;
}