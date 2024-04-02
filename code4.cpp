#include <bits/stdc++.h>
using namespace std;
int main()
{

    vector<int> v = {11, 111, 101, 1001, 1011, 1101, 1111, 11111, 10001, 11001, 11011, 11101, 10101, 10111, 10011};
    // cout<<v.size()<<", v1: "<<v[0]<<endl;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string temp = to_string(n);

        while (temp.back() == '0')
        {
            temp.pop_back();
        }
        string temp2 = temp;
        sort(temp.begin(), temp.end());
        if (temp.back() == '1' || temp.back() == '0')
        {
            cout << "YES"<<endl;
            continue;
            
        }

        int num = stoi(temp2);
        // cout<<"Num : "<<num<<endl;
        int flag = 0;

        while (num > 1)
        {
            // cout<<"Num in while : "<<num<<endl/;
            flag = 0;

            for (auto i : v)
            {
                if (num % i == 0)
                {
                    num = num / i;
                    flag = 1;
                    break;
                }
            }
            if (flag == 0)
            {
                break;
            }
        }
        if (flag == 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}