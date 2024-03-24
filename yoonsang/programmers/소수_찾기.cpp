#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool is_prime(int n) {
    if (n == 1) return false;

    for (int i = 2; i < n; ++i) {
        if (n % i == 0) return false;
    }
    return true;
}

int solution(int n) {
    int ans = 0;
	for (int i = 2; i <= n; ++i) {
    	if (is_prime(i)) {
            ++ans;
        }
	}
    
    return ans;
}

int main() {
    cout << solution(10);

    return 0;
}