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
        int n,a,b;
        cin>>n>>a>>b;
        if(b < 2*a)
        {
            cout<<(int(n/2) *b + (n%2) * a)<<endl;

        }
        else
        {
            cout<<n*a<<endl;
            
        }
        
    }
    return 0;
}