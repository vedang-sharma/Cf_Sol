#include <bits/stdc++.h>

typedef unsigned long long int ll;

using namespace std;

void solve()
{
    string s1, s2;

    getline(cin, s1);
    getline(cin, s2);

    unordered_map<char, int> s;

    int ans = 0;

    for (int i = 0; i < s1.size(); ++i) {

        if (s1[i] == ' ')
            continue;

        if (s.find(s1[i]) == s.end())
            s.insert({s1[i], 1});
        else
            ++s[s1[i]];
    }

    for (int i = 0; i < s2.size(); ++i) {

        if (s2[i] == ' ')
            ++ans;

        if (s.find(s2[i]) != s.end() && s[s2[i]] > 0) {

            ++ans;
            --s[s2[i]];
        }
    }

    if (ans == s2.size())
        cout << "YES\n";
    else
        cout << "NO\n";
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}