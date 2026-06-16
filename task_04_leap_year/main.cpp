
#include <iostream>
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    long long y;
    if (!(std::cin >> y))
        return 0;
    // TODO: implement leap rule and print YES/NO
    if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0)
        std::cout << "YES";
    else
        std::cout << "NO";
    return 0;
}
