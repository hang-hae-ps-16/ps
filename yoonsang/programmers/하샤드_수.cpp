// https://school.programmers.co.kr/learn/courses/30/lessons/12947?language=cpp
#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
  const string s = to_string(x);
  int sum = 0;
  for (char c : s)
    sum += c - '0';

  return x % sum == 0;
}