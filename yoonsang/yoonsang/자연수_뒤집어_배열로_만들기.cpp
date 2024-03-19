#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(long long n) {
  const string s = to_string(n);
  vector<int> v;
  v.reserve(s.size());

  for (auto b = s.rbegin(); b != s.rend(); ++b) {
    cout << *b << '\n';
    v.push_back(*b - '0');
  }

  return v;
}