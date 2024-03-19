// https://school.programmers.co.kr/learn/courses/30/lessons/12931#
#include <iostream>

using namespace std;
int solution3(int n) {
  int answer = 0;
  int a = 100000000;

  while (n > 0) {
    int b = n / a;
    if (b != 0) {
      answer += b;
      n -= (a * b);
    }

    a /= 10;
  }

  return answer;
}