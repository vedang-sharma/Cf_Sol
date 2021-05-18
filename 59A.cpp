#include <bits/stdc++.h>

using namespace std;

void solve()
{
    string net;
    cin >> net;

    int l = 0, u = 0;

    for (int i = 0; i < net.size(); ++i) {

        if (net[i] >= 65 && net[i] <= 90)
            ++l;
        else
            ++u;
    }

    // cout << l << " " << u << endl;

    if (l < u) {

        for (int i = 0; i < net.size(); ++i) {

            if (net[i] >= 65 && net[i] <= 90)
                net[i] += 32;
        }
    }
    else if (l > u) {

        for (int i = 0; i < net.size(); ++i) {

            if (net[i] >= 97 && net[i] <= 122)
                net[i] -= 32;
        }
    }
    else {

        for (int i = 0; i < net.size(); ++i) {

            if (net[i] >= 65 && net[i] <= 90)
                net[i] += 32;
        }
    }

    cout << net << "\n";
}

int main()
{
    solve();

    return 0;
}
