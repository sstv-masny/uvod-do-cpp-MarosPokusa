
#include <cstdlib>
#include <iostream>
long long gcdll(long long a, long long b) {
    // Euclid's algorithm (handles negatives)
    a = std::abs(a);
    b = std::abs(b);

    while (b != 0) {
        long long x = a % b;
        a = b;
        b = x;
    }
    return a;
}
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    long long p, q;
    if (!(std::cin >> p >> q))
        return 0;

    // TODO: reduce, ensure q'>0, and print p' q'

    int r = gcdll(p, q);
    if (q / r < 0) {
        std::cout << p / r * -1 << " " << q / r * -1;
    } else
        std::cout << p / r << " " << q / r;
    return 0;
}
