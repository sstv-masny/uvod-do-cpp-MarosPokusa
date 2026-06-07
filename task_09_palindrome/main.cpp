
#include <bits/stdc++.h>
#include <cctype>
#include <iostream>
#include <string>
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::string s;
    if (!std::getline(std::cin, s))
        return 0;
    // TODO: normalize and check palindrome; print YES/NO
    std::string new_s;
    for (char ch : s) {
        if (isalpha(ch)) {
            if (isupper(ch))
                ch = ch + 32;
            new_s += ch;
        }
    }
    s = new_s;
    reverse(new_s.begin(), new_s.end());
    if (new_s == s)
        std::cout << "YES";
    else
        std::cout << "NO";
    return 0;
}
