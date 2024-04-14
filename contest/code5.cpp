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

pair<int, int> bigger(string n1, string n2)
{
    int big = 0;
    int flag = 0;
    int i = 0;
    while(true)
    {
        if(i==n1.length())
        {
            flag = 1;
            break;
        }
        if(n1[i]>n2[i])
        {
            big = 1;
            break;
        }
        if(n1[i]<n2[i])
        {
            big = 2;
            break;
        }
        else
            i++;
    }
    pair<int, int> ans;
    ans.first = big;
    ans.second = i;
    return ans;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        string n1, n2;
        cin >> n1;
        cin>>n2;
        int big = 0;
        int i = 0;
        int flag = 0;
        pair<int, int> big_ind;
        big_ind = bigger(n1, n2);
        big = big_ind.first;
        // cout<<"Big: "<<big<<endl;
        if(big == 0)
        {
            cout<<n1<<endl;
            cout<<n2<<endl;
            continue;
        }
        for(ll i=0;i<n1.length();i++)
        {
            big = big_ind.first;
            if(big_ind.second == n1.length())
                break;
            if(big == 1)
            {
                if(n1[i]>n2[i])
                {
                    swap(n1[i], n2[i]);
                }
            }
            else
            {
                if(n2[i]>n1[i])
                {
                    swap(n1[i], n2[i]);
                    big = 1;
                }
            }
            big_ind = bigger(n1, n2);
        }
        cout<<n1<<endl;
        cout<<n2<<endl;

    }
    return 0;
}


//  7 7 7
//  1 1 1

//  1 77 
//  7 11

