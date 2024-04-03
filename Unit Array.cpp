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
        vi v(n);
        unordered_map<int,int>m;
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
        }
        m[-1]  = 0;
        m[1]  = 0;
        
        for(auto i : v)
        {
            m[i]++;
        }
        
        int flag = 1;
        int count = 0;

        if(m[-1]%2 == 0 && m[1] - m[-1] >= 0 )
        {
            cout<<"0"<<endl;
        }
        else if (m[-1] == n )
        {
            if(n%2 == 0 && n!=2)
                cout<<int(n/2)<<endl;
            else
                cout<<n<<endl;
                
        }
        
        else{
            while (flag)
            {
                if(m[1] - m[-1]  < 0 || m[-1]%2 !=0)
                {
                    m[1] ++;
                    m[-1] --;
                    count ++;
                }
                if(m[-1]%2 == 0 && m[1] - m[-1] >= 0 )
                {
                    cout<<count<<endl;
                    flag = 0;
                }

            }
            
        }
        
    }
    return 0;
}