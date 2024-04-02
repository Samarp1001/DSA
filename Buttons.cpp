#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while (t--)
    {
        int x,y,z;
        cin>>x>>y>>z;
        

        if(x > y+z)
            cout<<"First"<<endl;

        
        else if( y >= x+z)
            cout<<"Second"<<endl;

        else{
            if((z -abs(x-y)) %2 != 0)
                cout<<"First"<<endl;
            else    
                cout<<"Second"<<endl;
        }
        


    }
    
 
    return 0;
}
