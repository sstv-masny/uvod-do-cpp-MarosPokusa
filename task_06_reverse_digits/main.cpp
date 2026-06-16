
#include <iostream>
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    unsigned long long n;
    if (!(std::cin >> n))
        return 0;
    // TODO: reverse using % and /, not strings
    unsigned long long new_n = 0;
    while (n > 0) {
        new_n = new_n * 10 + n % 10;
        n /= 10;
    }

    std::cout << new_n;
    return 0;
}
