#include <iostream>
#include <vector>

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

int main() {
    std::vector<long long> v;

    long long i = 2;
    while (v.size() < 10001) {
        if (is_prime(i)) {
            v.push_back(i);
        }
        i++;
    }

    std::cout << v[10000] << std::endl;
    return 0;
}