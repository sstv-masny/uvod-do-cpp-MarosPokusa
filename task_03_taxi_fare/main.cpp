
#include <cmath>
#include <iomanip>
#include <iostream>
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    long long k;
    if (!(std::cin >> k))
        return 0;
    // Computes the fare as specified and prints with two decimals
    double fare = 4.00;
    if (k > 2)
        fare += (ceil(k) - 2) * 1.5;
    std::cout << std::setprecision(2) << std::fixed << fare;
    return 0;
}
