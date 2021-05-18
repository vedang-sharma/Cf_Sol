//111624209	Apr/01/2021 13:52UTC+5.5	aeroMustachio	260A - Adding Digits	GNU C++17	Accepted	31 ms	100 KB
#include <bits/stdc++.h>

#define ll unsigned long long int

using namespace std;

void solve()
{
    ll a, b, n;
    cin >> a >> b >> n;

    for (int i = 0; i < 10; ++i) {

        if (((a*10)+i)%b == 0) {

            a = (a*10)+i;
            string ans(n-1, '0');

            cout << a << ans << "\n";
            return;
        }
    }

    cout << "-1\n";
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}