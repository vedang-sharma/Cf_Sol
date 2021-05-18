//111635840	Apr/01/2021 16:33UTC+5.5	aeroMustachio	A - Ultra-Fast Mathematician	GNU C++17	Accepted	31 ms	0 KB
#include <bits/stdc++.h>

#define ll unsigned long long int

using namespace std;

void solve()
{
    string a, b;
    cin >> a >> b;

    string ans(a.size(), ' ');

    for (int i = 0; i < a.size(); ++i)
        ans[i] = ((a[i]-'0')^(b[i]-'0'))+'0';

    cout << ans << "\n";
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}
