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
        // vi v(n);
        int temp = 0;
        int ans = 0;
        for (int i = 0; i < n-1; i++)
        {
            cin>>temp;
            ans +=temp;

        }
        cout<<-ans<<endl;

        
    }
    return 0;
}