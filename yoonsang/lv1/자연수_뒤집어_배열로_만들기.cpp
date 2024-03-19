include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution4(long long n) {
    vector<int> answer;
    
    int d = 1;
    while (n > 0) {
        int m = n / d;
        answer.push_back(m);
        d *= 10;
        n -= m;
    }
    
    return answer;
}

auto res = solution4(12345);

//for (int i: res) {
//    cout << i << " ";
//}
//cout << '\n';