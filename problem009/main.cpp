#include <iostream>

bool calc() {
    for (int a = 1; a < 1000; a++) {
        for (int b = 1; b < 1000; b++) {
            int c2 = a * a + b * b;
            int c = sqrt(c2);
            if (a + b + c == 1000 && c * c == c2) {
                std::cout << "a=" << a << std::endl;
                std::cout << "b=" << b << std::endl;
                std::cout << "c=" << c << std::endl;
                std::cout << a * b * c << std::endl;
                return true;
            }
        }
    }
    return false;
}

int main() {
    calc();
    return 0;
}