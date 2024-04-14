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
        ll k,q;
        cin >> k>>q;
        vi a(k);
        vi n(q);
        for(int i = 0; i <k; i ++)
        {
            cin>>a[i];
        }
        vi ans;

        for(int i = 0; i < q; i++)
        {
            cin>>n[i];
        }
        int min1 = a[0];

        for(auto i :n)
        {
            if(i < min1)
                ans.pb(i);
            else 
                ans.pb(min1-1);
        }
        for(auto i : ans)
            cout<<i<<" ";
        cout<<endl;


       
    }
    return 0;
}