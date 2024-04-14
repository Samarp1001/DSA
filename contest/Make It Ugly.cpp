#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define ppb pop_back
#define vi vector<int>
#define vvi vector<vector<int>>
#define vpi vector<pair<int, int>>
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl

int main()
{
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        vi v(n);
        unordered_map<int,int>m;

        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
            m[v[i]]++;
        }
        if(m.size() == 1)
        {
            cout<<-1<<endl;
            continue;
        }

        int start = v[0];
        int idx = 0;
        int ans = n;
        for (int i = 0; i < n; i++)
        {
            if(v[i] == v[0])
                idx++;
            else
            {
                ans = min(ans,idx);
                idx  =0;
            }
        }

        ans = min(ans,idx);
        cout<<ans<<endl;
    }
    return 0;
}
