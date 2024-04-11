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
        int flag =0;

        for (int i = 0; i < n-1; i++)
        {
            if((v[i]%2 == 0 && v[i+1]%2 == 0) || (v[i]%2 !=0 && v[i+1]%2 != 0))
                flag ++;
        }
        cout<<flag<<endl;
        
        
        
    }
    return 0;
}