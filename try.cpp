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
        char s,a;
        cin>>s;
        if(s >= 97)
        {
         a = int(s) - 32;

        }
        else if(s < 97)
        {
            a = int(s) +32;
        }
        
        cout<<a<<endl;

    }
    return 0;
}