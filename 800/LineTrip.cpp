#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,d;
        cin>>n>>d;
        int temp;
        vector<int>v;
        v.push_back(0);
        for (int i = 0; i < n; i++)
        {
            cin>>temp;
            v.push_back(temp);
        }
        int min = 0;

        for (int i = 0; i < n; i++)
        {
            if(v[i+1] - v[i] > min)
                min = v[i+1] - v[i] ;
        }
        if(2 * abs(v[n] - d) > min)
            min = 2*abs(v[n] - d);

        cout<<min<<endl;

        

        

        
    }
    
    return 0;
}