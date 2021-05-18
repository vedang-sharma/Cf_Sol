#include <bits/stdc++.h>

using namespace std;

bool is_distinct(string n)
{
    unordered_set<char> um;

    for (int i = 0; i < n.size(); ++i) {

        if (um.find(n[i]) != um.end())
            return false;
        else
            um.insert(n[i]);
    }

    return true;
}
void solve()
{
    int n;
    cin >> n;

    while(1) {

        ++n;
        if (is_distinct(to_string(n))) {

            cout << n << "\n";
            break;
        }
    }
}

int main()
{
    solve();

    return 0;
}