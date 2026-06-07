
#include <iostream>
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    long long n;
    if (!(std::cin >> n))
        return 0;

    // Prints "even" or "odd"
    if (n % 2 == 0)
        std::cout << "even";
    else
        std::cout << "odd";

    return 0;
}
