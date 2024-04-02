#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        string s;
        cin >> s;
        string mor = "AM";
        string eve = "PM";

        int hour = stoi(s.substr(0, 2));
        string min = s.substr(3, 2);

        string ans;

        if(hour == 0)
        {
            cout<<12<<":"<<min<<" "<<mor;
        }
        else if (hour > 12 && hour < 22)
        {
            string temp = "0" + to_string(hour - 12);
            ans = temp + ":" + min + " " + eve;
        }
        else if (hour == 12)
        {
            string temp = to_string(hour);
            ans = temp + ":" + min+" " + eve;
        }
        else if (hour > 21)
        {
            string temp = to_string(hour - 12);
            ans = temp + ":" + min+" " + eve;
        }
        else if (hour < 12 and hour > 9)
        {
            string temp = to_string(hour);
            ans = temp + ":" + min+" " + mor;
        }
        else if (hour < 10)
        {
            string temp = to_string(hour);
            ans = "0"+temp + ":" + min+" " + mor;
        }
        cout << ans <<endl;
    }

    return 0;
}