#include <bits/stdc++.h>

typedef unsigned long long int ll;

using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;

    vector<int> puz(m);

    for (int i = 0; i < m; ++i)
        cin >> puz[i];

    sort(puz.begin(), puz.end());

    int ans = INT_MAX;
    int j = n-1;

    for (int i = 0;; ++i) {

        if ((puz[j]-puz[i]) <= ans)
            ans = puz[j]-puz[i];

        ++j;
        if (j >= m)
            break;
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