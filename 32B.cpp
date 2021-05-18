#include <bits/stdc++.h>

using namespace std;

void solve()
{
    string bc;

    cin >> bc;

    string ans;

    for (int i = 0; i < bc.size(); ++i) {

        if (bc[i] == '-')
            if (bc[i+1] == '.') {

                ans += '1';
                ++i;
            }
            else {

                ans += '2';
                ++i;
            }
        else
            ans += '0';
    }

    cout << ans << "\n";
}

int main()
{
    solve();

    return 0;
}