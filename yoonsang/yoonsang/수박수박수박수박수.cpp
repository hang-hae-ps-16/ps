// https://school.programmers.co.kr/learn/courses/30/lessons/12922

#include <string>
#include <vector>

using namespace std;

string solution(int n) {
  string r;
  for (int i = 1; i <= n; ++i) {
    if (i % 2 == 0) {
      r += "¹Ú";
    }
    else {
      r += "¼ö";
    }
  }
  return r;
}