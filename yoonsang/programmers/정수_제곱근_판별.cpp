// https://school.programmers.co.kr/learn/courses/30/lessons/12934

#include <string>
#include <vector>
#include <cmath>

using namespace std;

long long solution(long long n) {
  const int s = sqrt(n);
  if (pow(s, 2) == n)
    return (s + 1) * (s + 1);

  return -1;


}