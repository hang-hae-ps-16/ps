// https://school.programmers.co.kr/learn/courses/30/lessons/12903

#include <string>
#include <cmath>

using namespace std;

string solution2(string s) {
  const int mid = (int)floor(s.size() / 2);
  return s.size() % 2 != 0 ?
    s.substr(mid, 1) :
    s.substr(mid - 1, 2);
}
