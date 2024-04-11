#include "bits/stdc++.h"
using namespace std;

#define ll long long int
#define pb push_back
#define ppb pop_back
#define vi vector<int>
#define vvi vector<vector<int>>
#define vpi vector<pair<int, int>>

int main()
{
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        vi v(n);
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
        }
        vi ans;
        ans.pb(v[0]);
        for (int i = 1; i < n; i++)
        {
            if(v[i-1] > v[i])
            {
                ans.pb(v[i]);
                ans.pb(v[i]);

            }
            else
                ans.pb(v[i]);

        }
        cout<<ans.size()<<endl;
        for(auto i:ans)
        {
            cout<<i<<" ";
        }
        cout<<endl;
        
        
        
    }
    return 0;
}