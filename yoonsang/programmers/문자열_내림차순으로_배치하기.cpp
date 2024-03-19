//https://school.programmers.co.kr/learn/courses/30/lessons/12917

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool to_upper(char s) {
  return (int)s - 32;
}

string solution(string s) {
  vector<string> u;
  vector<string> l;
  for (char c : s) {
    if (c == to_upper(c)) {
      u.push_back({ c });
    }
    else {
      l.push_back({ c });
    }
  }

  sort(l.begin(), l.end(), greater<>());
  sort(u.begin(), u.end(), greater<>());

  string ans;
  for (string s : u) {
    ans = ans + s;
  }

  for (string s : l) {
    ans = ans + s;
  }

  return ans;
}