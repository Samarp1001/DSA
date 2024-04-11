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
            int temp;
            vector<int> v;
            for (int i = 0; i < n; i++)
            {
                cin >> temp;
                v.push_back(temp);
            }

            unordered_map<int, int> m;
            set<int> s;

            for (auto i : v)
            {
                s.insert(i);
                m[i]++;
            }

            sort(v.begin(),v.end());
            int hel = m[v[0]];
            int sam = m[v[n-1]];

            if ((s.size() == 2 && (hel == sam || hel == sam-1 || sam == hel-1)) || s.size() == 1)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }

        return 0;
    }