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
        vi v(n);
        int two = 0;
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
            if(v[i] == 2)
                two++;
        }
        int i = 0;
        if(two %2 == 0)
        {
            int j = int(two/2);


            while (j)
            {
                if(v[i] == 2)
                    j--;
                i++;
            }
            if(i == 0)
            {
                cout<<1<<endl;
            }
            else
            {
                cout<<i<<endl;
                
            }
            
        }
        else{
            cout<<-1<<endl;
            
        }
        
    }
    return 0;
}