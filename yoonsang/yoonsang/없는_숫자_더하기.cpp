// https://school.programmers.co.kr/learn/courses/30/lessons/86051

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> numbers) {
  int sum = 1 + 2 + 3 + 4 + 5 + 6 + 7 + 8 + 9;

  for (int i : numbers) {
    sum -= i;
  }

  return sum;
}