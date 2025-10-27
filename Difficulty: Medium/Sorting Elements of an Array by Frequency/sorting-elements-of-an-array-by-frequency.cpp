#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    static bool cmp(const pair<int,int> &a, const pair<int,int> &b)
    {
        // Higher frequency first
        if (a.second != b.second)
            return a.second > b.second;
        // If frequency same, smaller number first
        return a.first < b.first;
    }

    vector<int> sortByFreq(vector<int> &arr)
    {
        unordered_map<int,int> freq;

        // Count frequency
        for (int x : arr)
            freq[x]++;

        vector<pair<int,int>> vec(freq.begin(), freq.end());
        sort(vec.begin(), vec.end(), cmp);

        vector<int> ans;
        for (auto &p : vec)
            for (int i = 0; i < p.second; i++)
                ans.push_back(p.first);

        return ans;
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;  // Number of testcases
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        Solution ob;
        vector<int> res = ob.sortByFreq(arr);

        for (int x : res)
            cout << x << " ";
        cout << "\n";
    }

    return 0;
}
