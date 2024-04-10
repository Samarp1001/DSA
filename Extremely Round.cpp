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
        if(n < 11)
            cout<<n<<endl;
        else
        {
            string sam = to_string(n);
            int ans = int(n/pow(10,sam.size()-1));
            int ans2 = ans + 9*(sam.size()-1);
            cout<<ans2<<endl;
            


        }
    }
    return 0;
}