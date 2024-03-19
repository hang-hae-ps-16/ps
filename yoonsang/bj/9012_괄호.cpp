#include <iostream>
#include <stack>
#include <string>
#include <vector>

using namespace std;

vector<char> split(string s) {
  vector<char> ret;
  for (char c : s) {
    ret.push_back(c);
  }
  return ret;
}

void prob2() {
  int t = 0;
  cin >> t;

  vector<string> answer;
  answer.reserve(t);

  for (int i = 0; i < t; ++i) {
    string str;
    cin >> str;

    stack<char> st;
    auto splitted = split(str);
    for (auto const &s : splitted)
      st.push(s);

    int vps = 0;
    while (!st.empty()) {
      const auto token = st.top();
      st.pop();

      if (token == ')')
        ++vps;
      else {
        --vps;
        if (vps < 0)
          break;
      }
    }

    answer.push_back(vps == 0 ? "YES" : "NO");
  }

  for (int i = 0; i < answer.size(); ++i) {
    cout << answer[i];
    if (i < answer.size()) {
      cout << endl;
    }
  }
}

//int main() {
//  ::prob();
//  return 0;
//}