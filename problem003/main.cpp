#include <iostream>

void prime_factor(long long num) {
    auto s = (long long)sqrt(num);
    auto y = num;

    for (long long i = 2; i < s + 1; i++) {
        while (y % i == 0) {
            std::cout << i << std::endl;
            y /= i;
        }
    }

    if (y > 1)
        std::cout << y << std::endl;

}

int main() {
    long long input = 0;
    
    std::cin >> input;
    prime_factor(input);

    //prime_factor(13195);
    //prime_factor(600851475143);
}
