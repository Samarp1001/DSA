#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while (n--)
    {
        int t ;
        cin>>t;

        vector<vector<char>>ans;
        
        vector<char>ans1;
        for(int i = 0; i < t; i++)
        {
            if(i%2 == 0)
            {
                ans1.push_back('#');
                ans1.push_back('#');
            }
            else    
            {
                ans1.push_back('.');
                ans1.push_back('.');
            }
        }
        vector<char>ans2;
        for(int i = 0; i < t; i++)
        {
            if(i%2 != 0)
            {
                ans2.push_back('#');
                ans2.push_back('#');
            }
            else    
            {
                ans2.push_back('.');
                ans2.push_back('.');
            }
        }

        for(int i = 0; i < t; i++)
        {
            if(i%2 == 0)
            {
                ans.push_back(ans1);
                ans.push_back(ans1);

            }
            else
            {
                ans.push_back(ans2);
                ans.push_back(ans2);
            }
        }

        for(auto i:ans)
        {
            for(auto j:i)
            {
                cout<<j;
            }
            cout<<endl;
        }

        

    }
    
   
 
    return 0;
}