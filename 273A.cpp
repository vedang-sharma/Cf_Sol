#include <bits/stdc++.h>

typedef unsigned long long int ll;

using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<pair<int, int>> ce;

    for (int i = 0; i < n; ++i) {

        int h, m;
        cin >> h >> m;

        ce.push_back(make_pair(h, m));
    }

    int ans = 1;
    int temp = 1;
    for (int i = 0; i < n-1; ++i) {

        if (ce[i].first == ce[i+1].first && ce[i].second == ce[i+1].second)
            ++temp;
        else
            temp = 1;
            
        ans = max(ans, temp);
    }

    cout << ans << "\n";
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();
    
    return 0;
}