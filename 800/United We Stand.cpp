#include "bits/stdc++.h"
using namespace std;

#define ll long long int
#define pb push_back
#define ppb pop_back
#define vi vector<int>
#define vvi vector<vector<int>>
#define vpi vector<pair<int, int>>
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;


int main()
{
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        vi v(n);
        
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
            

        }
       
        sort(v.begin(),v.end());
        if(v.back() == v[0])
        {
            cout<<-1<<endl;
            continue;

        }
        
        ll itr = 0;
        while (v[itr] == v[0])
            itr++;

        cout << itr << " " << n - itr << endl;
        for (int i = 0; i < itr; i++)
            cout << v[i] << " ";
        cout<<endl;
        for (int i = itr; i < n; i++)
            cout << v[i] << " ";
        cout << endl;


        
    }
    return 0;
}