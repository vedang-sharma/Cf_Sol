#include <iostream>

int main() {


    int w;
    
    std::cin >> w;

    if(w % 2 != 0) {

        std::cout << "NO" << std::endl;
    }
    else if(w == 2) {

        std::cout << "NO" << std::endl;
    }
    else {

        std::cout << "YES" << std::endl;
    }

    return 0;
}