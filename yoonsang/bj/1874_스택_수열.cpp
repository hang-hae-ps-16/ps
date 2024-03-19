// https://www.acmicpc.net/problem/1874
#pragma once

#include <stack>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

template <typename T>
void print(vector<T> const& v) {
  for (const T e : v) {
    cout << e << '\n';
  }
}

void prob_() {
  int n = 0;
  cin >> n;
  int cnt = 0;

  deque<int> st;
  while (cnt < n) {
    int input = 0;
    cin >> input;
    st.push_front(input);
    ++cnt;
  }

  vector<int> cmp;
  for (int i = 1; i <= n; ++i) cmp.push_back(i);

  bool failed = false;
  vector<char> sign;

  int last = 1;
  while (!st.empty()) {
    const int cur = st.back();
    st.pop_back();

    while (!cmp.empty()) {
      if (cmp.front() >= cur) {
        sign.push_back('-');
        last--;

        break;
      }

      sign.push_back('+');
      last++;
    }
  }

  print(sign);
}

//int main() {
//  ::prob_();
//  return 0;
//}

// 8> 4 3 6 8 7 5 2 1
// ++++--++-++-----
// 1234
// 12 34 -> [4, 3]
// 1256
// 125 6 -> [4, 3, 6]
// 12578
// 125 78 -> [4, 3, 6, 8, 7]
// - -> [4, 3, 6, 8, 7, 5, 2, 1]

// 5> 1 2 5 3 4
// NO
// +-+-
// 1
// - 1 -> [1]
// 2
// - 2 -> [1, 2]
// 345
// 34 5 -> [1, 2, 5]
// 34 = STOP

