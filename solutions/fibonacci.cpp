#include <iostream>
#include <vector>

int main() {

    // note that the limits of int are 2147483647, so we are going to overflow
    // after ~50 terms

    // we could instead use long here

    std::vector<int> fib{0, 1};

    int n{0};

    std::cout << "how many terms should we compute?" << std::endl;
    std::cin >> n;

    for (int i = 2; i <= n; ++i) {
        fib.push_back(fib[i-1] + fib[i-2]);
    }

    for (auto e : fib) {
        std::cout << e << " ";
    }
    std::cout << std::endl;
    
}