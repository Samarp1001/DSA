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
        int n;
        cin>>n;
        vi v(n);
        for(int i=0; i<n; ++i)
            cin>>v[i];
        bool flag=1;
        while(flag)
        {
            flag=0;
            for(int i=1; i<n-1; ++i)
            {
                if(v[i]>v[i-1] && v[i]>v[i+1])
                {
                    flag = 1;
                    swap(v[i],v[i+1]);
                }
            }
        }
        vi n1(n);
        n1 = v;
        sort(v.begin(),v.end());

        if(v == n1)
           cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

        
    }
    return 0;
}