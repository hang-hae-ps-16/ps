#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int bruteforce(vector<int> number) {
    int ans = 0;
    
    for (int i = 0; i < number.size(); ++i) {
        for (int j = i + 1; j < number.size(); ++j) {
            for (int k = j + 1; k < number.size(); ++k) {
                int sum = number[i] + number[j] + number[k];
                
                if (sum == 0) ++ans;
            }
        }
    }
    
    return ans;
}