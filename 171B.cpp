//115426383	May/06/2021 19:45UTC+5.5	aeroMustachio	171B - Star	GNU C++17	Accepted	62 ms	3600 KB
#include <bits/stdc++.h>

#define ll unsigned long long int
#define M 1000000007

using namespace std;

void solve()
{
    int n;
    cin >> n;

    cout << 6*n*(n-1)+1 << "\n";
}

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("inputf.in", "r", stdin);
		freopen("outputf.in", "w", stdout);
	#endif

	ios::sync_with_stdio(0);
	cin.tie(0);

    solve();

	return 0;
}
