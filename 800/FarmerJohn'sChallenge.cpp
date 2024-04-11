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
        if(x == y)
        {
            for(int i = 0; i < x;i ++)
            {
                cout<<1<<" ";
            }
            cout<<endl;
        }
        else if(y == 1)
        {
            for (int i = 0; i < x; i++)
            {
                cout<<i+1<<" ";
            }
            cout<<endl;
            
        }
        else{
            cout<<-1<<endl;

        }
    }
    
    return 0;
}