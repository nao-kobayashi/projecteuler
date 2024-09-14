#include <iostream>
#include <vector>

using namespace std;

long long gcd(long long a, long long b) {
    auto min_ = min(a, b);
    auto max_ = max(a, b);

    if (max_ % min_ == 0) {
        return min_;
    } else {
        return gcd(min_, max_ % min_);
    }
}

long long lcm(long long a, long long b) {
    return a * b / gcd(a, b);
}

long long lcm(vector<int> & vec) {
    long long l = vec[0];
    for (int i = 0; i < vec.size() - 1; i++) {
        l = lcm(l, vec[i + 1]);
    }
    return l;
}

int main() {
    vector<int> v = {};
    for (int i = 1; i <= 20; i++)
        v.push_back(i);
        
    cout << lcm(v) << endl;
}