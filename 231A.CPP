#include <iostream>

int main() {

    int pnum, cnt = 0, frnd;

    std::cin >> pnum;

    while(pnum--) {

        int tot = 0;

        for(int j = 0; j < 3; ++j) {

            std::cin >> frnd;
            tot += frnd;
        }
        
        if(tot >= 2) {

            cnt++;
        }
    }

    std::cout << cnt <<std::endl;

    return 0;
}