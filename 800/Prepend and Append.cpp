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
        string s;
        cin>>s;
        int i = 0;
        int count = 0;
        int j = s.size()-1;
        while (i < j)
        {
            if((s[i] == '0' && s[j] == '1') || (s[i] == '1' && s[j] == '0'))
            {
                count +=2;
                i++;
                j--;
            }
            else    
                break;

        }
        cout<<s.size()-count<<endl;

        
        
    }
    return 0;
}