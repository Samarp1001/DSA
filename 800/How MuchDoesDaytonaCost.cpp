#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int x,y;
        cin>>x>>y;
        int temp;
        vector<int>v;
        for (int i = 0; i < x; i++)
        {
            cin>>temp;
            v.push_back(temp);
        }
        unordered_map<int,int>m;
        for(auto i : v)
        {
            m[i]++;
        }
        if(m[y] >=1)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;  
        }
        
    }
    
    return 0;
}