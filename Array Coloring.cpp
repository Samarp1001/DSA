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
        ll cnt =0 ;
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
            if(v[i] %2  == 1)
            {
                cnt++;
            }
        }
        if(cnt%2 == 1)
            cout<<"NO"<<endl;
        else   
            cout<<"YES"<<endl;
            

        
    }
    return 0;
}