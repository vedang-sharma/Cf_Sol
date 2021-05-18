//111609746          01 APR 2021          315A          Accepted          62ms          12kb
#include <bits/stdc++.h>

#define ll unsigned long long int

using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<pair<int, int>> v(n);
    int ans = 0;

    for (int i = 0; i < n; ++i)
        cin >> v[i].first >> v[i].second;

    for (int i = 0; i < n; ++i) {

        for (int j = 0; j < n; ++j) {

            if (i == j)
                continue;
            
            if (v[i].first == v[j].second) {

                ++ans;
                break;
            }
        }
    }

    cout << n-ans << "\n";
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}