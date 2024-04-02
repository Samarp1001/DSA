// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin>>t;
//     while (t--)
//     {
//         int n;
//         cin>>n;
//         int temp;
//         vector<int>v;
//         for (int i = 0; i < n; i++)
//         {
//             cin>>temp;
//             v.push_back(temp);

//         }
//         int sam = n;
//         int right,left;
//         vector<int>ans (n);

//         for (int i = n-1; i >= 0; i--)
//         {
//             left = v[i];
//             left = sam -v[i];
//             ans[i] = left;
//             if(left < sam)
//             {
//                 sam = left;
//             }

//         }
//         for(auto i : ans)
//         {
//             cout<<i<<" ";
//         }
//         cout<<endl;

        

        
//     }
    
 
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

vector<int> computeMinimumRightDifference(vector<int>& v) {
    int n = v.size();
    int sam = n;
    vector<int> ans(n);

    for (int i = n - 1; i >= 0; i--) {
        int left = sam - v[i];
        ans[i] = left;
        if (left < sam) {
            sam = left;
        }
    }

    return ans;
}

void printVector(const vector<int>& sam) {
    for(auto i : sam) {
        cout << i << " ";
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> ans1(n);
        for (int i = 0; i < n; i++) {
            cin >> ans1[i];
        }

        vector<int> ans = computeMinimumRightDifference(ans1);
        printVector(ans);
    }

    return 0;
}


