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
        if(n == 2 && s == "00")
        {
            yes;
            continue;
        }
        if(n == 2)
        {
            no;
            continue;
        }
        if(n == 1 && s=="0")
        {
            yes;
            continue;
        }
        if(n == 1)
        {
            no;
            continue;
        }
        int count = 0;
        vi v;
        for(int i = 0; i < n; i ++)
        {
            if(s[i] == '1')
            {
                count ++;
                v.pb(i);
            }
            
        }
        int flag = 0;
        if(count == 2)
        {
            for (int i = 0; i < v.size()-1; i++)
            {
                if( (v[i+1] - v[i]) == 1)
                {
                    no;
                    flag = 1;
                    continue;
                }
            }
                if(flag == 1)
                    continue;
        }

        if(count%2 == 0)
            yes;
        else
            no;

        

    }
    return 0;
}