//115134209	May/04/2021 21:59UTC+5.5	aeroMustachio	B - Ciel and Flowers	GNU C++17	Accepted	30 ms	0 KB
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("inputf.in", "r", stdin);
		freopen("outputf.in", "w", stdout);
	#endif

	ios::sync_with_stdio(0);
	cin.tie(0);

    int r, g, b;
    cin >> r >> g >> b;

	int a = 0;

	if (r == 0 || g == 0 || b == 0) {

		a += (r/3)+(g/3)+(b/3);

		cout << a << "\n";
		return 0;
	}
		
	int m0 = (r/3)+(g/3)+(b/3);
	int m1 = ((r-1)/3)+((g-1)/3)+((b-1)/3)+1;
	int m2 = ((r-2)/3)+((g-2)/3)+((b-2)/3)+2;

	a = max(m0, max(m1, m2));

	cout << a << "\n";
	
    return 0;
}