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
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
        }
        swap(v[0],v[1]);
        swap(v[n-1],v[0]);

        if(v[0] ==v[1])
            no;
        else
        {
            yes;
            for(auto i :v)
            {
                cout<<i<<" ";
            }
            cout<<endl;
            
        }

        
    }
    return 0;
}