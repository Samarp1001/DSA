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
        
        int x,y;
        cin>>x>>y;
        if(x%y !=0)
        {
            cout<<1<<endl;
            cout<<x<<endl;
        }
        else
        {
            cout<<2<<endl;
            cout<<x-1<<" "<<1<<endl;
        }
    }
    return 0;
}