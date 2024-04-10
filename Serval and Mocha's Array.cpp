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
        int flag = 0;
        vi v(n);
        for (int  i = 0; i < n; i++)
        {
            cin>>v[i];
        }
        for (int  i = 0; i < n; i++)
        {
            for (int j = i+1; j < n; j++)
            {
                if(__gcd(v[i],v[j])  <= 2)
                {
                    flag = 1;
                    break;

                }
            } 
        }
        if(flag == 1)
            yes;
        else
            no;
            
        
        
    }
    return 0;
}