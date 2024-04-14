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
        ll n,m,k;
        cin >> n >> m>>k;
        vi v(n);

        for (int i = 0; i < n; i++)
        {
            if(i%m != 0)
                v[i] = i%m;
            else    
                v[i] = m;
        }
        int count = 0;
        for(int i = 0; i < n; i ++)
        {
            if(count != k)
            {
                if(v[i] != m)
                {
                    v[i] = m;
                    count++;

                }
                    
            }
            else 
                break;

        }
        int flag = 0;
        for(int i = 0; i < n-1; i ++)
        {
            if(v[i] != v[i+1])
            {
                flag = 1;
                break;
            }
        }
        if(flag ==1)
            yes;
        else 
            no;



        
        
    }
    return 0;
}