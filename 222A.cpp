#include <bits/stdc++.h>

typedef unsigned long long int ll;

using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;

    vector<int> v(n);

    for (auto &i: v)
        cin >> i;

    for (int i = k-1; i < n-1; ++i)
        if (v[i] != v[i+1]) {

            cout << -1 << "\n";
            return;
        }

    int ans = 0;
    for (int i = 0; i < k; ++i)
        if (v[i] != v[k-1])
            ans = i+1;

    cout << ans << "\n";
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();
    
    return 0;
}