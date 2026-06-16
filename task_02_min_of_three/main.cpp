
#include <iostream>
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    long long a, b, c;
    if (!(std::cin >> a >> b >> c))
        return 0;
    // Prints the minimum of a, b, c
    if (a < b && a < c)
        std::cout << a;
    else if (b < c)
        std::cout << b;
    else
        std::cout << c;
    return 0;
}
