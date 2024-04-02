#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        vector<int> v2;
        v2 = v;
        sort(v.begin(), v.end());
        if (v != v2)
        {
            cout << 0 << endl;
        }
        else
        {
            int min1 = INT_MAX;
            for (int i = 0; i < n - 1; i++)
            {
                if (v[i + 1] - v[i] < min1)
                    min1 = v[i + 1] - v[i];
            }

            int ans = ceil(min1 / 2);
            cout << ans + 1 << endl;
        }
    }

    return 0;
}