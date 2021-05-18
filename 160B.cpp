#include <bits/stdc++.h>

#define unsigned long long int ll;

using namespace std;

void solve()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    string f, l;

    f = s.substr(0, n);
    l = s.substr(n, n);

    sort(f.begin(), f.end());
    sort(l.begin(), l.end());

    bool cond;
    if (f[0] > l[0])
        cond = true;
    else if (f[0] < l[0])
        cond = false;
    else {

        cout << "NO\n";
        return;
    }

    for (int i = 1; i < n; ++i) {

        if ((cond && f[i] <= l[i]) || (!cond && f[i] >= l[i])) {

            cout << "NO\n";
            return;
        }
    }

    cout << "YES\n";
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}