#include <bits/stdc++.h>

typedef unsigned long long int ll;

using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; ++i)
        cin >> a[i];

    pair<int, int> res;
    int temp = INT_MAX;

    for (int i = 0; i < n; ++i) {

        int p = (n+i-1)%n;
        int nt = (i+1)%n;
        int l = abs(int(a[i]-a[p]));
        int r = abs(int(a[nt]-a[i]));

        if (l <= r)
            if (l <= temp) {

                temp = l;

                res = make_pair(i+1, p+1);
            }
        else
            if (r <= temp) {

                temp = r;

                res = make_pair(nt+1, i+1);
            }
    }

    cout << res.first << " " << res.second << "\n";
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}
