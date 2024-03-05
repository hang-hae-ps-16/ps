// https://school.programmers.co.kr/learn/courses/30/lessons/12933

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

long long solution(long long n)
{
    vector<string> v;
    int digit = 10;

    while (n > 0)
    {
        const int div = n % digit;
        v.push_back(to_string(div));
        n /= digit;
    }

    sort(v.begin(), v.end(), greater<>());

    string res;
    for (auto const &p : v)
    {
        res += p;
    }

    return stoll(res);
}