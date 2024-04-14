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
        unordered_map<int,int>m;
        vi v(n);
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
            if(m.find(v[i])!=m.end())
                m[v[i]]++;
            else    
                m[v[i]] = 1;
            
        }
        int count = 0;
        for(auto i : m)
        {
            if(i.second == 2);
                count++;
        }
        cout<<count<<endl;

        
    }
    return 0;
}