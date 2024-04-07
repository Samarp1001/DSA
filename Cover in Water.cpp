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
        string s;
        cin>>s;
        int cnt = 0;
        for (int i = 0; i < n-2; i++)
        {
            if(s.substr(i,3) == "...")
            {
                cnt++;
            }
        }
        if(cnt == 0)
        {
            for(auto i : s)
            {
                if(i == '.')
                    cnt++;
                
            }
        }
        else    
            cnt = 2;
        cout<<cnt<<endl;
        
    }
    return 0;
}