#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int ans = 0;

    while(t--)
    {
        string temp;
        cin>>temp;
        if(temp == "X++" or temp == "++X")
            ans++;
        else
            ans--;

    }
    cout<<ans<<endl;

 
    return 0;
}