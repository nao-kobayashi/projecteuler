 #include <iostream> 
 
 int main() {
    long long a = 0;
    long long b = 0;
    long long sum = 0;
    int i = 1;

    while (true) {
        if (i == 1) {
            a = 1;
            b = 1;
        } else {
            int tmp = b;
            b += a;
            a = tmp;
        }

        if (b > 4000000) {
            break;
        } else if (b % 2 == 0) {
            sum += b;
        }
        i++;
    }

    std::cout << sum << std::endl;
 }