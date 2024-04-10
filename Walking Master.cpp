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
        int x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;
        int ans = 0;

        if(x1 == x2 && y1 == y2)
        {
            cout<<0<<endl;
            continue;
        }
        if(y1 > y2)
        {
            cout<<-1<<endl;
        }
        else
        {
            while (y1 !=y2)
            {
                ans++;
                y1++;
                x1++;
            }
            if(x1 == x2)
            {
                cout<<ans<<endl;
            }
            else if(x2 > x1)
            {
                cout<<-1<<endl;
            }
            else
            {
                while (x1!=x2)
                {
                   x1--;
                   ans ++;

                }
                cout<<ans<<endl;

                
            }
            
            
        }
        
    }
    return 0;
}