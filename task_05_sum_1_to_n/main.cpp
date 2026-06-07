
#include <iostream>

// Viac cool riesenie ale nebude fungovat pri vysokych cislach
/*long long sum(long long n) {
    if (n == 0)
        return 0;
    return n + sum(n - 1);
}*/

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    long long n;
    if (!(std::cin >> n))
        return 0;
    // Computes sum 1..n
    std::cout << n * (n + 1) / 2;
    return 0;
}
