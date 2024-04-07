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
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
            sum+=v[i];
        }
        double fi = sum /n;

        vi ans(n);
        if(n %2 != 0)
        {
            for (int i = 0; i < n; i++) 
            {
                ans[i] = abs( v[i] - int(2*fi));
            }
        }
        else
        {
            for (int i = 0; i < n; i++) 
            {
                ans[i] = 1+abs(v[i] -int(2*fi));
            }
        }
        for(auto i : ans)
        {
            cout<<i<<" ";
        }
        cout<<endl;

        

        
    }
    return 0;
}