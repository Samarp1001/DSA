#include "bits/stdc++.h"
using namespace std;

#define ll long long
#define vi vector<int>
#define vvi vector<vector<int>>
#define vpi vector<pair<int, int>>

int main() {
    ll sam;
    cin >> sam;
    while (sam--) {
        ll cows, hel;
        cin >> cows >> hel;
        vi samarp(cows);
        hel--;
        for (ll i = 0; i < cows; i++) {
            cin >> samarp[i];
        }
        ll val = samarp[hel];
        ll c1 = 0, c2 = 0;

        swap(samarp[0], samarp[hel]);
        for (ll i = 1; i < cows; i++) {
            if (samarp[i] < val) c1++;
            else break;
        }
        swap(samarp[0], samarp[hel]);

        ll sam1 = 0, ik = 0, sam2 = 0;
        for (ll i = 0; i < hel; i++) {
            if (samarp[i] > val) {
                sam1 = samarp[i];
                ik = i;
                break;
            }
        }
        for (ll i = 0; i < ik; i++) {
            if (samarp[i] > sam2) {
                sam2 = samarp[i];
            }
        }

        if (sam2 < val && sam1 > val) {
            swap(samarp[ik], samarp[hel]);
            for (ll i = ik + 1; i < cows; i++) {
                if (samarp[i] < val) c2++;
                else break;
            }
            if (ik != 0 && samarp[ik - 1] < val) c2++;
            swap(samarp[ik], samarp[hel]);
        }
        cout << max(c1, c2) << endl;
    }
    return 0;
}
