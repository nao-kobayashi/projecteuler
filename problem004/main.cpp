#include <iostream>
#include <stack>
#include <string>

bool palindromes(int num) {
    if (num >= 11) {
        std::stack<char> nums;
        std::string sNum = std::to_string(num);

        for (auto s : sNum) {
            nums.push(s);
        }
        
        std::string reverse;
        while(nums.size() > 0) {
            reverse.push_back(nums.top());
            nums.pop();
        }

        return num == std::stoi(reverse);
    }

    return false;
}

int main() {
    // std::cout << palindromes(11) << std::endl;
    // std::cout << palindromes(111) << std::endl;
    // std::cout << palindromes(123) << std::endl;
    // std::cout << palindromes(9009) << std::endl;
    // std::cout << palindromes(9118) << std::endl;
    // std::cout << palindromes(9339) << std::endl;

    int biggest_i = 0;
    int biggest_j = 0;
    int biggest_num = 0;

    for (int i = 999; i >= 100; i--) {
        for (int j = 999; j >= 100; j--) {
            int num = i * j;
            if (num > biggest_num && palindromes(num)) {
                biggest_i = i;
                biggest_j = j;
                biggest_num = num;
            }
        }
    }
    
    std::cout << biggest_i << "," << biggest_j << "," << biggest_num << std::endl;
}