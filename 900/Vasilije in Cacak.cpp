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
        ll n,k2,x;
        cin >> n>>k2>>x;
        ll k = n-k2;


        ll n1 = int(n*(n+1)/2);
        ll k1 = int(k*(k+1)/2);

        

        if(n1-k1 > x )
        {
            no;
        }
        else    
            yes;

        
    }
    return 0;
}