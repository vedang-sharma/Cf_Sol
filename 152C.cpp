//115122504	May/04/2021 19:32UTC+5.5	aeroMustachio	152C - Pocket Book	GNU C++17 (64)	Accepted	60 ms	0 KB
#include <bits/stdc++.h>

#define ll unsigned long long int
#define M 1000000007

using namespace std;

void solve()
{
	int m, n;
	cin >> n >> m;

	vector<string> v(n);

	for (auto &i: v) {

		string s;
		cin >> s;

		i = s;
	}

	int ans = 1;

	for (int i = 0; i < m; ++i) {

		unordered_set<int> s;

		for (int j = 0; j < n; ++j) {

			if (s.find(v[j][i]) == s.end())
				s.insert(v[j][i]);
		}

		ans = (ans*(s.size()%M))%M;
	}

	cout << ans << "\n";
}

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("inputf.in", "r", stdin);
		freopen("outputf.in", "w", stdout);
	#endif

	ios::sync_with_stdio(0);
	cin.tie(0);

	// int t;
	// cin >> t;

	// while (t--)
	solve();

	return 0;
}