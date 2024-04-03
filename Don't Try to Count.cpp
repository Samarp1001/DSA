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
        ll n,m;
        cin >> n>>m;
        
        string s1;
        string s2;
        cin>>s1;
        cin>>s2;
        int flag = 1;
        int count =0;
 
        if(s1 == s2)
        {
            cout<<0<<endl;
            continue;
        }
        // while (s1.size() <= s2.size())
        //     {
        //         count ++;
        //         s1 = s1+s1;
        //     }
            
        
        while (true)
        {
            if(s1.length()>=s2.length())
                for(int i  = 0; i < s1.length() -s2.length() + 1; i++)
                    if(s1.substr(i,s2.length()) == s2)
                    {
                        flag = 0;
                        break;
                    }
            if(!flag)
                break;
            s1+=s1;
            count ++;
 
            if(count > 5)
                break;
 
        }
        if(flag == 0)
            cout << count<<endl;
        else    
            cout<<-1<<endl;
 
    }
    return 0;
}