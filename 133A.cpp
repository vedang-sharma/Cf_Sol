//111752232	Apr/02/2021 09:25UTC+5.5	aeroMustachio	133A - HQ9+	GNU C++17	Accepted	62 ms	0 KB
#include <bits/stdc++.h>

#define ll unsigned long long int

using namespace std;

void solve()
{
    string p;
    cin >> p;

    for (int i = 0; i < p.size(); ++i) {

        if (p[i] == 'H' || p[i] == 'Q' || p[i] == '9') {

            cout << "YES\n";
            return;
        }
    }

    cout << "NO\n";
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();
    
    return 0;
}