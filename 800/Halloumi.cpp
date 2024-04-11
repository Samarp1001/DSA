#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t ;
    cin>>t;
    while (t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int>v;
        int temp;

        for(int i = 0; i < n; i++)
        {
            cin>>temp;

            v.push_back(temp);

        }
        vector<int>s1;

        s1 = v;
        sort(v.begin(),v.end());
        if(v == s1 || k > 1)
        {
                cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    
    return 0;
}