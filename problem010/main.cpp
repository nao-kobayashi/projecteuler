#include <iostream>

bool is_prime(long long num) {
    if (num == 1)
        return false;
    else if (num < 4)
        return true;

    long long limit = (long long)sqrt(num);
    for (int i = 2; i <= limit + 1; i++) {
        if (num % i == 0)
            return false;
    }

    return true;
}

long long sum_of_primes(int limit) {
    long long answer = 0;
    for (int i = 1; i <= limit; i++) {
        answer += is_prime(i) ? i : 0;
    }
    return answer;
}

int main() {
    int limit;

    std::cin >> limit;
    std::cout << sum_of_primes(limit) << std::endl;

    return 0;
}