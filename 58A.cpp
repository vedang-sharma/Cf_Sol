#include <bits/stdc++.h>

typedef unsigned long long int ll;

using namespace std;

pair<bool, int> check(string &s, int l, char ch)
{
    for (int i = l; i < s.size(); ++i) {

        if (s[i] == ch)
            return make_pair(true, i);
    }

    return make_pair(false, -1);
}

void solve()
{
    string msg;
    cin >> msg;

    string hello = "hello";

    pair<bool, int> p;
    int l = 0;

    for (int i = 0; i < hello.size(); ++i) {

        p = check(msg, l, hello[i]);

        if (p.first == true)
            l = p.second+1;
        else {

            cout << "NO\n";
            return;
        }
    }

    cout << "YES\n";
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();
    
    return 0;
}