#include <iostream>
#include <limits>

int main() {

    double eps{std::numeric_limits<double>::epsilon()};

    double x{1};

    // this compares 1 and 1 + eps -- the result is false, meaning that the
    // computer can tell them apart

    bool test = x == (x + eps);

    std::cout << "1 + eps == 1 is " << test << std::endl;

    // now we compare 1 and 1 + 2*eps -- again this is false, as expected

    test = x == (x + 2 * eps);

    std::cout << "1 + 2 eps == 1 is " << test << std::endl;

    // finally we compare 1 and 1 + eps/2 -- this is true, meaning that
    // the computer thinks that they are the same!

    test = x == (x + eps / 2);

    std::cout << "1 + eps / 2 == 1 is " << test << std::endl;

}