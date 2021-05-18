//114757185	May/01/2021 13:58UTC+5.5	aeroMustachio	D - Little Girl and Maximum XOR	GNU C++17	Accepted	62 ms	0 KB
#include <iostream>
#include <cmath>

#define ll unsigned long long int

using namespace std;

void solve()
{
	ll x, y;
	cin >> x >> y;

	if (x == y) {

		cout << (x^y) << "\n";
		return;
	}

	ll tbx = log2(x)+1;
	ll tby = log2(y)+1;

	ll p = 1LL;

	if (tby != tbx)
		p <<= (tby-1);
	else {

		p <<= (tby);

		while ((x&p) == (y&p))
			p >>= 1ull;
	}

	p <<= 1;

	cout << p-1 << "\n";
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