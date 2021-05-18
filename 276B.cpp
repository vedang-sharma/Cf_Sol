#include <bits/stdc++.h>

typedef unsigned long long int ll;

using namespace std;

void solve()
{
    string s;
    cin >> s;

    int i = 0;
    int j = s.size()-1;

    unordered_set<char> us;

    for (int i = 0; i < s.size(); ++i) {

        if (us.find(s[i]) == us.end())
            us.insert(s[i]);
        else
            us.erase(s[i]);
    }

    int ans = us.size();

    if (ans%2 || ans == 0)
        cout << "First" << "\n";
    else
        cout << "Second" << "\n";
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}