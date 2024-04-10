#include "bits/stdc++.h"
using namespace std;

#define ll long long int
#define pb push_back
#define ppb pop_back
#define vi vector<int>
#define vvi vector<vector<int>>
#define vpi vector<pair<int, int>>

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, x, y;
        cin >> n >> x >> y;
        vi hel(n * n);
        for (ll i = 0; i < n * n; i++)
        {
            cin >> hel[i];
        }

        vector<bool> arr(n * n);
        sort(hel.begin(), hel.end());
        ll sam = hel[0];
        ll i = 0;
        ll j = 0;
        ll cnt = 0;
        ll flag = 0;
        while (true)
        {
            cnt = 0;
            j = 0;
            ll curr = sam;
            flag = 0;
            while (true)
            {
                if (j == n * n)
                {
                    flag = 1;
                    break;
                }
                if (arr[j] == 0 && hel[j] == curr)
                {
                    curr = curr + y;
                    arr[j] = 1;
                    cnt++;
                }
                if (cnt == n)
                    break;
                j++;
            }
            sam = sam + x;
            i++;
            if (i == n)
                break;
        }
        ll flag2 = 0;
        for (auto ind : arr)
        {
            if (ind == 0)
            {
                flag2 = 1;
                break;
            }
        }
        if (flag2)
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
