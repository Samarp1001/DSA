#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    char arr[10][10];
    while (t--)
    {
        char s;
        for (int  i = 0; i < 10; i++)
        {
           for (int j = 0; j < 10; j++)

           {
                cin>>arr[i][j];

           }
           
        }
        

        int one = 0,two = 0, three= 0, four =0, five = 0;

        
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                if((i == 0 || i == 9 || j == 0 || j==9)&& arr[i][j] == 'X')
                    one++;
                else if((i == 1 || i == 8|| j == 1 || j==8)&& arr[i][j] == 'X')
                    two++;
                else if((i == 2 || i == 7|| j == 2 || j==7)&& arr[i][j] == 'X')
                    three++;
                else if((i == 3 || i == 6|| j == 3 || j==6)&& arr[i][j] == 'X')
                    four++;
                else if((i == 4 || i == 5|| j == 4 || j==5)&& arr[i][j] == 'X')
                    five++;
            }
            
        }
        //cout<<one<<" "<<two<< " "<<three<<" "<<four<<" "<<five<<" ";
        int ans = one + (two *2) +(three *3) + (four *4) + (five*5);
        cout<<ans<<endl;

        
    }
    
 
    return 0;
}