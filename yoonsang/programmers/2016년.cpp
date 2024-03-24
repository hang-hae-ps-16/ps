// https://cmcenroe.me/2014/12/05/days-in-month-formula.html

#include <iostream>
#include <string>
#include <vector>

using namespace std;

string solution(int a, int b) {
  vector<string> dates{"FRI", "SAT", "SUN", "MON", "TUE", "WED", "THU", };
  vector<int> last_days{31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

  int acc = b - 1;

  for (int i = 0; i < a - 1; ++i) {
    acc += last_days[i];
  }

  cout << acc;

  return dates[acc % 7];
}

int main() {
  const string sol = solution(5, 24);
  std::cout << "\nsolution: " << sol << '\n';
  return 0;
}
