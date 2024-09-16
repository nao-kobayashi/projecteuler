#include <iostream>
#include <vector>

using namespace std;

vector<pair<long long, long long>> factoring(long long n) {
    vector<pair<long long, long long>> answers;

    if (n == 1) {
        answers.push_back(make_pair(1, 1));
        return answers;
    }

    for (long long i = 2; i * i < n; i++) {
        if (n % i != 0) 
            continue;

        int e = 0;
        while (n % i == 0) {
            e++;
            n /= i;
        }

        answers.push_back(make_pair(i, e));
    }

    if (n != 1)
        answers.push_back(make_pair(n, 1));
    
    return answers;
}


int main() {
    int t = 1;
    int i = 2;

    while(true) {
        //triangle numbers
        t += i;

        int nums = 1;
        auto prime_factors = factoring(t);
        
        //素因数分解した結果の指数部それぞれに1足して全部掛け合わせると約数の数になる
        //ex) 28 => 2^2, 7^1 => (2 + 1) * (1 + 1) => 6
        //28の約数 => 1,2,4,7,14,28
        for (auto factor: prime_factors) {
            nums *= (factor.second + 1);
        }

        if (nums >= 500) {
            cout << t << endl;
            break;
        }
        i++;
    }

    return 0;
}