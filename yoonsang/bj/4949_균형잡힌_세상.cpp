// https://www.acmicpc.net/problem/4949
// 4949 균형잡힌 세상

#include <iostream>
#include <stack>
#include <string>

using namespace std;

bool contains(const string &from, const string &str) {
  return from.find(str) != string::npos;
}

void prob1() {
  ios::sync_with_stdio(false);

  string line;
  while (getline(cin, line)) {
    if (line == ".")
      break;

    bool failed = false;
    stack<char> st;
    for (const char c : line) {
      if (c == '(' || c == '[') {
        st.push(c);
        continue;
      }

      if (c == ']') {
        if (!st.empty() && st.top() == '[') {
          st.pop();
          continue;
        }

        failed = true;
        break;
      }

      if (c == ')') {
        if (!st.empty() && st.top() == '(') {
          st.pop();
          continue;
        }

        failed = true;
        break;
      }
    }

    if (!failed && st.empty()) {
      cout << "yes\n";
    } else {
      cout << "no\n";
    }
  }
}

//int main() {
//  ::prob();
//
//  return 0;
//}