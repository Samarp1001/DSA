#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define ppb pop_back
#define vi vector<int>
#define vvi vector<vector<int>>
#define vpi vector<pair<int, int>>
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        int kx, ky;
        int qx, qy;
        int gx, gy;
        cin >> gx >> gy;
        cin >> kx >> ky;
        cin >> qx >> qy;

        int count = 0;

        set<pair<int, int>> uniquePairs;

        // Add all possible pairs to the set
        uniquePairs.insert({kx + gx, ky + gy});
        uniquePairs.insert({kx - gx, ky + gy});
        uniquePairs.insert({kx + gx, ky - gy});
        uniquePairs.insert({kx - gx, ky - gy});
        uniquePairs.insert({kx + gy, ky + gx});
        uniquePairs.insert({kx - gy, ky + gx});
        uniquePairs.insert({kx + gy, ky - gx});
        uniquePairs.insert({kx - gy, ky - gx});

        // Convert set to vector
        vector<pair<int, int>> v(uniquePairs.begin(), uniquePairs.end());

        // cout << "vpi v: ";
        // for (auto& p : v) {
        //     cout << "(" << p.first << ", " << p.second << ") ";
        // }
        // cout << endl;
        for (auto &p : v)
        {
            if (p.first == qx + gx && p.second == qy + gy)
            {
                count++;
            }
            else if (p.first == qx - gx && p.second == qy + gy)
            {
                count++;
            }
            else if (p.first == qx + gx && p.second == qy - gy)
            {
                count++;
            }
            else if (p.first == qx - gx && p.second == qy - gy)
            {
                count++;
            }
            else if (p.first == qx + gy && p.second == qy + gx)
            {
                count++;
            }
            else if (p.first == qx - gy && p.second == qy + gx)
            {
                count++;
            }
            else if (p.first == qx + gy && p.second == qy - gx)
            {
                count++;
            }
            else if (p.first == qx - gy && p.second == qy - gx)
            {
                count++;
            }
        }
        cout<< count << endl;
    }
    return 0;
}
