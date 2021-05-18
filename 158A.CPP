#include <iostream>

using namespace std;

int main() {

    int n, k, a[100], c1 = 0;

    cin >> n >> k;

    for(int i = 0 ; i < n; ++i) {

        cin >> a[i];
    }

    for(int i = 0; i < n; ++i) {

        if(a[i] >= a[k-1]) {
            
            if(a[i] > 0){

                c1++;
            }
        }
    }

    cout << c1 << endl;

    return 0;
}