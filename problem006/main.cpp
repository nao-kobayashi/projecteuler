#include <iostream>

int main() {
    long long a = 0;
    long long b = 0; 
    for (int i = 1; i <= 100; i++) {
        a += i * i;
        b += i; 
    }

    b *= b;
    std::cout << b - a << std::endl;
    return 0;
}