#include <iostream>
#include <cmath>

using namespace std;

int main() {

    unsigned long long int a, m, n;

    cin >> n >> m >> a;

    if(n % a == 0 && m % a == 0) {

        cout << (n/a) * (m/a) << endl;
    }
    else if(n % a == 0) {

        cout << ((ceil((float)m/a)) * (n/a)) << endl;
    }
    else if(m % a == 0) {

        cout << ((m/a) * (ceil((float)m/a))) << endl;
    }
    else {

        cout << (ceil((float)m/a) * (ceil((float)m/a))) << endl;
    }
    return 0;
}