//111639574	Apr/01/2021 17:15UTC+5.5	aeroMustachio	A - Blackjack	GNU C++17	Accepted	30 ms	0 KB
#include <bits/stdc++.h>

#define ll unsigned long long int

using namespace std;

void solve()
{
    int a;
    cin >> a;
    a -= 10;

    int ans = 0;
    if (a >= 2 && a <= 9)
        ans = 4;
    if (a == 10)
        ans = 15;
    if (a == 1 || a == 11)
        ans = 4;

    cout << ans << "\n";
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}