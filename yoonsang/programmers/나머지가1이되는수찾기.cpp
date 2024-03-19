// https://school.programmers.co.kr/learn/courses/30/lessons/87389
#include <string>
#include <vector>

using namespace std;

int solution1(int n) {
  // n % x = 1
  for (int i = 1; i < n; i++) {
    if (1 == n % i) {
      return i;
    }
  }
}