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
        int ans = 0;
        for(int i =0 ; i < n ; i++)
        {
            cin>>v[i];
            ans  = ans ^ v[i];
        }
        if(n%2 == 0)
        {
            if(ans == 0)
            {
                cout<<0<<endl;
            }
            else{
                cout<<-1<<endl;

            }
        }
        else
        {
            cout<<ans<<endl;
            
        }
    }
    return 0;
}