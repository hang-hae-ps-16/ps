// https://school.programmers.co.kr/learn/courses/30/lessons/12940?language=cpp
#include <string>
#include <vector>
#include <cmath>

using namespace std;

int gcd(int n, int m) {
  const int big = max(n, m);
  int gcd = 0;
  for (int i = 1; i <= big; ++i) {
    if (n % i == 0 && m % i == 0) gcd = i;
  }

  return gcd;
}

int lcm(int n, int m) {
  return n * m / gcd(n, m);
}

vector<int> solution(int n, int m) {
  return { gcd(n, m), lcm(n, m) };
}