#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    int n;
    cin>>n;
    vector<int>v;
    int temp;

    for(int i = 0; i < n; i++)
    {
        cin>>temp;
        if(temp < 0)
        {
            temp = temp *(-1);
        }
        v.push_back(temp);
    }
    sort(v.begin(),v.end());
    cout<<v[0]<<endl;
    
    return 0;
}