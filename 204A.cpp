//115392594	May/06/2021 13:22UTC+5.5	aeroMustachio	204A - Little Elephant and Interval	GNU C++17	Accepted	62 ms	3600 KB
#include <bits/stdc++.h>

#define ll unsigned long long int
#define M 1000000007

using namespace std;

int cnt(string s)
{
	int n = s.length();

	if (n == 1) return s[0]-49;
	if (n == 2) return ((((s[0]-48)*10)+(s[1]-48))/11)+9;

	int sm = 0;
	for (int i = 0; i < n; ++i)
		sm += (s[i]-48);

	if (sm == 1)
		return ((ll)(pow(10, n-2)+0.5))+8;

	int fd = s[0]-48;
	ll temp = 1;

	if (s[0] <= s[n-1])
		for (int i = 1; i < n-1; ++i)
			temp *= (s[i]-47);

	temp += (fd-1)*(ll)(pow(10, n-2)+0.5);

    if ((n-3)>=1)
        temp += ((ll)(pow(10, n-2)+0.5))+8;

	return temp+18;
}

void solve()
{
   string l, r;
   cin >> l >> r;

   cout << cnt(r)-cnt(l) << "\n";
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