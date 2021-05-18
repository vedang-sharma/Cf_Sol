#include <bits/stdc++.h>

typedef unsigned long long int ll;

using namespace std;

void solve()
{
    int n;
    cin >> n;

    int fc = 0;

    for (int i = 0; i < n; ++i) {

        int e;
        cin >> e;

        fc += e;
    }

    --fc;

    int ans = 0;

    for (int i = 1; i <= 5; ++i) {

        if ((fc+i)%(n+1) != 0)
            ++ans;    
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