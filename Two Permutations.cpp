#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define ppb pop_back
#define vi vector<int>
#define vvi vector<vector<int>>
#define vpi vector<pair<int, int>>
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n,x,y;
        cin >> n >> x >> y;
        if((x+y >= n-1) && !(x==y && x==n))
        {
            no;
        }
        else
            yes;
            

    }
    return 0;
}